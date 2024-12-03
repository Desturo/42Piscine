/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:43:15 by nschneid          #+#    #+#             */
/*   Updated: 2024/11/21 12:43:50 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

//Wirtes  hex notation of input char into output array;
char	*ft_char_to_hex(char *output, char input)
{
	unsigned int	position;
	unsigned int	result;

	output[0] = '\\';
	position = 2;
	while (input || position > 1)
	{
		result = input % 16;
		input /= 16;
		if (result < 10)
			output[position] = result + 48;
		else
			output[position] = result + 87;
		position--;
	}
	if (position == 1)
		output[1] = '0';
	return (output);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	counter;
	char			hex_out[3];

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] >= ' ' && str[counter] != 127)
			write(1, &str[counter], 1);
		else
			write(1, ft_char_to_hex(hex_out, str[counter]), 3);
		counter++;
	}
}

// int	main(void)
// {
// 	char	test[33];
// 	int		counter = 0;

// 	while (counter < 31) {
// 		test[counter] = counter + 1;
// 		counter++;
// 	}
// 	test[counter] = 127;
// 	counter++;
// 	test[counter] = '\0';
// 	ft_putstr_non_printable("Coucou\ntu vas bien");
// 	return (0);
// }
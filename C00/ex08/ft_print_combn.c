/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 00:34:08 by nschneid          #+#    #+#             */
/*   Updated: 2024/11/17 03:51:18 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	init_buffer(char *buffer)
{
	int counter;

	counter = 1;
	buffer[0] = '\0';
	while(counter < 10)
	{
		buffer[counter] = '0';
		counter++;
	}
	buffer[10] = '\0';
}

void	ft_putstr(char *str)
{
	int	counter;

	counter = 1;
	while (str[counter])
		write(1, &str[counter++], 1);
}

int	print_comb(char *buffer, int str_pos)
{
	if (buffer[9] != '9')
		buffer[9]++;
	else if (buffer[str_pos--] != 1- buffer[str_pos])
	{
		buffer[str_pos--]++;
	}
	ft_putstr(buffer);
	ft_putstr("\n\0");
	return (0);
	/* int	max_l;
	
	max_l = str_pos - 1;
	if (buffer[str_pos + 1] != '\0')
		buffer[str_pos] = buffer[str_pos + 1];
	else
		buffer[str_pos] = '0';
	while (buffer[str_pos - 1] <= max_l + '0')
	{
		while (buffer[str_pos] < '9')
		{
			buffer[str_pos]++;
			printf("Buffer: %s\n", buffer + 1);
		}
		buffer[str_pos] = buffer[str_pos - 1] + 1;
		buffer[str_pos - 1]++;
	}  */
}

void	ft_print_combn(int n)
{
	char	buffer[11];
	int		str_pos;
	
	str_pos = 9;
	init_buffer(buffer);
	while(print_comb(buffer, str_pos))
	{
		
	}

}

int	main(void)
{
	ft_print_combn(4);
	/* int	n;

	n = 1;
	while (n++ < 10)
	{
		ft_print_combn(n);
	} */
	return (0);
}

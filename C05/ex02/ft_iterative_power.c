/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 13:54:49 by nschneid          #+#    #+#             */
/*   Updated: 2024/11/28 14:03:05 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	counter;
	int	output;

	output = 1;
	counter = 0;
	if (power < 0)
		return (0);
	while (counter < power)
	{
		output *= nb;
		counter++;
	}
	return (output);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%i", ft_iterative_power(0,0));
// 	return (0);
// }
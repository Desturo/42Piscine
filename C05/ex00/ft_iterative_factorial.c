/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 12:35:48 by nschneid          #+#    #+#             */
/*   Updated: 2024/11/28 13:45:39 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	counter;
	int	output;

	output = 1;
	counter = 1;
	if (nb < 0)
		return (0);
	while (counter <= nb)
		output *= counter++;
	return (output);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%i", ft_iterative_factorial(1));
// 	return (0);
// }
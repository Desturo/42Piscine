/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 11:48:50 by nschneid          #+#    #+#             */
/*   Updated: 2024/11/17 04:03:27 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	digits [3];

	digits[0] = '0';
	digits[1] = '1';
	digits[2] = '2';
	while (digits[0] <= '7')
	{
		digits[1] = digits[0] + 1;
		while (digits[1] <= '8')
		{
			digits[2] = digits[1] + 1;
			while (digits[2] <= '9')
			{
				write(1, digits, 3);
				if (digits[0] != '7')
				{
					write(1, ", ", 2);
				}
				digits[2]++;
			}
			digits[1]++;
		}
		digits[0]++;
	}
}
/* 
int	main(void)
{
	ft_print_comb();
	return (0);
} */

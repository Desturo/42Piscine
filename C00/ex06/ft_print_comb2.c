/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:06:34 by nschneid          #+#    #+#             */
/*   Updated: 2024/11/17 04:03:28 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_pairs(char *pairs)
{
	char	output_string[7];

	output_string[0] = pairs[0];
	output_string[1] = pairs[1];
	output_string[2] = ' ';
	output_string[3] = pairs[2];
	output_string[4] = pairs[3];
	output_string[5] = ',';
	output_string[6] = ' ';
	if (!(pairs[0] == '9' && pairs[1] == '8'))
	{
		write(1, output_string, 7);
	}
	else
	{
		write(1, output_string, 5);
	}
}

void	check_overflow(char *pairs)
{
	if (pairs[2] == pairs[0])
	{
		pairs[3] = pairs[1] + 1;
	}
	else
	{
		pairs[3] = '0';
	}
}

void	increase_pairs(char *pairs)
{
	while (pairs[0] <= '9')
	{
		while (pairs[1] <= '9')
		{
			pairs[2] = pairs[0];
			while (pairs[2] <= '9')
			{
				check_overflow(pairs);
				while (pairs[3] <= '9')
				{
					print_pairs(pairs);
					pairs[3]++;
				}
				pairs[2]++;
			}
			pairs[1]++;
		}
		pairs[1] = '0';
		pairs[0]++;
	}
}

void	ft_print_comb2(void)
{
	char	pairs[7];

	pairs[0] = '0';
	pairs[1] = '0';
	pairs[2] = '0';
	pairs[3] = '0';
	increase_pairs(pairs);
}
/* 
int	main(void)
{
	ft_print_comb2();
	return (0);
} */

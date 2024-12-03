/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 13:49:42 by nschneid          #+#    #+#             */
/*   Updated: 2024/12/03 13:03:07 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_pow(int nb, int power)
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

int	ft_strlen(char *str)
{
	int	len;
	
	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	get_value(char digit, char *base)
{
	int	idx;

	idx = 0;
	while (base[idx])
	{
		if (digit == base[idx])
			return (idx);
		idx++;
	}
	return (-1);
}

#include <stdio.h>
int	to_base_ten(char *nbr, char *base)
{
	int	base_size;
	int	output;
	int	num_idx;
	int	idx;

	idx = 0;	
	base_size = ft_strlen(base);
	num_idx = ft_strlen(nbr) - 1;
	output = 0;
	while (idx < num_idx + 1)
	{
		output += get_value(nbr[idx], base) * ft_pow(base_size, num_idx - idx);
		idx++;
	}
	return (output);
}

// char *ft_convert_base(char *nbr, char *base_from, char *base_to)
// {
// 	int	to_size;

// 	to_size = ft_strlen(base_to);
// 	return (NULL);
// }

int	main(void)
{
	printf("%d\n", to_base_ten("F3123", "0123456789ABCDEF"));
	//test
	return (0);
}
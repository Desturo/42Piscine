/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 17:24:03 by nschneid          #+#    #+#             */
/*   Updated: 2024/11/28 10:11:26 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int	ft_pow(int base, int exponent, int sign)
{
	int	counter;

	counter = 0;
	while (counter < exponent)
	{
		sign *= base;
		counter++;
	}
	return (sign);
}

int	get_val(char digit, char *base)
{
	int	output;

	output = 0;
	while (base[output] != digit)
		output++;
	return (output);
}

void	jump_to_number(char *str, char *base, int *sign, int *props)
{
	int		base_counter;
	bool	valid;

	base_counter = 0;
	while (str[props[1]] == ' ' || (str[props[1]] >= 9 && str[props[1]] <= 13))
		props[1]++;
	while (str[props[1]] == '+' || str[props[1]] == '-')
		*sign *= (-2 * (str[props[1]++] == '-') + 1);
	while (str[props[0] + props[1]])
	{
		valid = false;
		while (base[base_counter])
		{
			if (base[base_counter++] == str[props[0] + props[1]])
			{
				valid = true;
				break ;
			}
		}
		base_counter = 0;
		if (valid)
			props[0] += 1;
		else
			break ;
	}
}

int	set_base(char *base)
{
	int		idx;
	int		duplicate_idx;

	idx = 0;
	duplicate_idx = 1;
	while (base[idx])
	{
		if (base[idx] == ' ' || (base[idx] >= 9 && base[idx] <= 13)
			|| base[idx] == '-' || base[idx] == '+')
			return (0);
		while (base[duplicate_idx])
		{
			if (base[idx] == base[duplicate_idx])
				return (0);
			duplicate_idx++;
		}
		idx++;
		duplicate_idx = idx + 1;
	}
	return (idx);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	out;
	int	base_number;
	int	counter;
	int	props[2];

	props[0] = 0;
	props[1] = 0;
	counter = 0;
	base_number = 0;
	out = 0;
	base_number = set_base(base);
	if (base_number < 2)
		return (0);
	sign = 1;
	jump_to_number(str, base, &sign, props);
	while (counter < props[0])
	{
		out += get_val(str[props[1] + counter], base)
			* ft_pow(base_number, props[0] - 1 - counter, sign);
		counter++;
	}
	return (out);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d", ft_atoi_base("---2147483648", "2342"));
// 	return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 13:49:42 by nschneid          #+#    #+#             */
/*   Updated: 2024/12/03 15:56:25 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_pow(int nb, int power);
int	ft_strlen(char *str);
int	get_value(char digit, char *base);
int	check_base(char *base);

int	to_base_ten(char *nbr, char *base)
{
	int	base_size;
	int	output;
	int	num_idx;
	int	idx;

	idx = 0;
	base_size = ft_strlen(base);
	num_idx = 0;
	while (get_value(nbr[num_idx], base) != -1)
		num_idx++;
	num_idx--;
	output = 0;
	while (idx < num_idx + 1)
	{
		output -= get_value(nbr[idx], base) * ft_pow(base_size, num_idx - idx);
		idx++;
	}
	return (output);
}

int	get_nbr_length(int nbr, int base_size, int sign)
{
	int	counter;

	counter = 0;
	while (nbr != 0)
	{
		nbr /= base_size;
		counter++;
	}
	if (sign == -1)
		counter++;
	return (counter);
}

char	*ten_to_base(int nbr, char *base, int sign)
{
	int		base_size;
	char	*output;
	int		counter;

	if (nbr == -2147483648 && sign == -1)
		return (NULL);
	base_size = ft_strlen(base);
	counter = get_nbr_length(nbr, base_size, sign);
	nbr *= -1;
	output = (char *)malloc(sizeof(char) * (counter + 1));
	output[counter] = 0;
	if (nbr == 0)
	{
		output[0] = base[0];
		return (output);
	}
	if (sign == -1)
		output[0] = '-';
	while (nbr != 0)
	{
		output[counter - 1] = base[(nbr % base_size)];
		nbr /= base_size;
		counter--;
	}
	return (output);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		base_ten;
	char	*output;
	int		sign;

	sign = 1;
	if (!check_base(base_from) && !check_base(base_to))
		return (NULL);
	while (*nbr == ' ' || (*nbr >= 9 && *nbr <= 13))
		nbr++;
	while (*nbr == '-' || *nbr == '+')
	{
		if (*nbr == '-')
			sign *= -1;
		nbr++;
	}
	base_ten = to_base_ten(nbr, base_from);
	output = ten_to_base(base_ten, base_to, sign);
	return (output);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%s\n", ft_convert_base(" -22hfgf", "0123456789abcdef", "01"));
// }
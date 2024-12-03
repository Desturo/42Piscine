/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 14:04:10 by nschneid          #+#    #+#             */
/*   Updated: 2024/11/28 10:21:45 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

#define BUFF_SIZE 42

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
		counter++;
	return (counter);
}

bool	ft_get_sign(long *num)
{
	if (*num < 0)
	{
		*num *= -1;
		return (true);
	}
	return (false);
}

bool	ft_has_duplicates(char *str)
{
	int		idx;
	int		duplicate_idx;

	idx = 0;
	duplicate_idx = 1;
	while (str[idx])
	{
		while (str[duplicate_idx])
		{
			if (str[idx] == str[duplicate_idx])
				return (true);
			duplicate_idx++;
		}
		idx++;
		duplicate_idx = idx + 1;
	}
	return (false);
}

bool	ft_valid_input(int nbr_base, long num, char *base)
{
	int	index;

	index = 0;
	if (nbr_base < 2)
		return (false);
	else if (ft_has_duplicates(base))
		return (false);
	else if (num == 0)
	{
		write(1, &base[0], 1);
		return (false);
	}
	while (base[index])
	{
		if (base[index] == ' ' || (base[index] >= 9 && base[index] <= 13)
			|| base[index] == '-' || base[index] == '+')
			return (false);
		index++;
	}
	return (true);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		nbr_base;
	char	buffer[BUFF_SIZE];
	int		index;
	bool	is_negative;
	long	num;

	num = (long)nbr;
	index = BUFF_SIZE - 2;
	buffer[BUFF_SIZE - 1] = '\0';
	nbr_base = ft_strlen(base);
	is_negative = ft_get_sign(&num);
	if (!ft_valid_input(nbr_base, num, base))
		return ;
	while (num > 0)
	{
		buffer[index--] = base[num % nbr_base];
		num /= nbr_base;
	}
	if (is_negative)
		buffer[index] = '-';
	else
		index++;
	while (buffer[index])
		write(1, &buffer[index++], 1);
}

// #include <limits.h>
// int	main(void)
// {
// 	ft_putnbr_base(222, "\v\n\r\t");
// 	return (0);
// }cd
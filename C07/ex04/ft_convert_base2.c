/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 10:11:38 by nschneid          #+#    #+#             */
/*   Updated: 2024/12/03 15:40:36 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	check_base(char *base)
{
	int	counter;

	if (base[1] == 0)
		return (0);
	while (*base)
	{
		counter = 1;
		if (*base == '-' || *base == '+')
			return (0);
		while (base[counter])
		{
			if (*base == base[counter])
				return (0);
			counter++;
		}
		base++;
	}
	return (1);
}

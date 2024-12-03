/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 20:26:25 by nschneid          #+#    #+#             */
/*   Updated: 2024/11/28 17:18:59 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	ft_is_whitespace(char to_check)
{
	if (to_check == ' ' || (to_check >= 9 && to_check <= 13))
		return (true);
	return (false);
}

int	ft_atoi(char *str)
{
	int	index;
	int	sign;
	int	output;

	index = 0;
	sign = 1;
	output = 0;
	while (ft_is_whitespace(str[index]))
		index++;
	while (str[index] == '+' || str[index] == '-')
	{
		if (str[index] == '-')
			sign = sign * -1;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		output = (output * 10) + (str[index] - '0');
		index++;
	}
	return (output * sign);
}

#include <stdio.h>
int	main(void)
{
	printf("%d", ft_atoi("-2147483648"));
	return (0);
}
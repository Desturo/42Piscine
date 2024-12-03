/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 22:28:27 by nschneid          #+#    #+#             */
/*   Updated: 2024/11/19 22:51:05 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}
/* 
#include <stdio.h>

int	main(void)
{
	char	*test;

	test = "dsfdsfdsfdsfgfdh";
	printf("%d", ft_str_is_lowercase(test));
	return (0);
} */

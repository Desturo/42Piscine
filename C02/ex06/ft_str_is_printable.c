/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 22:28:27 by nschneid          #+#    #+#             */
/*   Updated: 2024/11/20 11:03:59 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < ' ' || str[i] > '~')
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

	test = " !\"#$%&'()*+,-./0123456789:;<=>?@[\\]^_`{|}~";
	printf("%d", ft_str_is_printable(test));
	return (0);
} */

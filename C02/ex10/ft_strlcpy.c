/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 12:13:28 by nschneid          #+#    #+#             */
/*   Updated: 2024/11/20 15:42:06 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strign_size_from(char *str, unsigned int start)
{
	while (str[start] != '\0')
	{
		start++;
	}
	return (start);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	counter;

	counter = 0;
	if (size == 0)
	{
		return (ft_strign_size_from(src, counter));
	}
	if (size == 1)
	{
		dest[0] = '\0';
		while (src[counter] != '\0')
		{
			counter++;
		}
		return (ft_strign_size_from(src, counter));
	}
	while (counter < size - 1 && src[counter] != '\0')
	{
		dest[counter] = src[counter];
		counter++;
	}
	dest[counter] = '\0';
	return (ft_strign_size_from(src, counter));
}
/* 
#include <stdio.h>

int	main(void)
{
	char	destination[20];
	char	source[7] = "12345";
	//ft_strlcpy(destination,source, 0);
	printf("%d\n", ft_strlcpy(destination,source, 8));
	printf("%s", destination);
	return (0);
} */

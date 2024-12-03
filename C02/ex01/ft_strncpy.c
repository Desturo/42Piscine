/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 20:11:37 by nschneid          #+#    #+#             */
/*   Updated: 2024/11/21 15:51:23 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	while ((src[counter] != '\0') && (counter < n))
	{
		dest[counter] = src[counter];
		counter++;
	}
	while (counter < n)
	{
		dest[counter] = '\0';
		counter++;
	}
	return (dest);
}

#include <stdio.h>
// #include <string.h>

int	main(void)
{
	char	dest[12];
	char	src[] = "1234567fdsfdsfdsfdsfdsfdsfdsf";

	// strncpy(dest, src, 15);
	ft_strncpy(dest, src, 15);
	printf("%s", dest);
	return (0);
}
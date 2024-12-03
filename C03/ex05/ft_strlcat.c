/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 19:47:20 by nschneid          #+#    #+#             */
/*   Updated: 2024/11/25 22:51:05 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	size;

	size = 0;
	while (str[size])
		size++;
	return (size);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	counter;

	dest_len = ft_strlen(dest);
	counter = 0;
	if (size <= dest_len)
		return (size + ft_strlen(src));
	while (src[counter] && dest_len + counter < size - 1)
	{
		dest[dest_len + counter] = src[counter];
		counter++;
	}
	dest[dest_len + counter] = '\0';
	return (dest_len + ft_strlen(src));
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char			dest[100] = "abcdefg";
// 	char			dest2[100] = "abcdefg";
// 	char			*src = "xyz1234";
// 	unsigned int	len = 12;

// 	printf("Output: %lu\n", strlcat(dest, src, len));
// 	printf("String: %s\n\n", dest);
// 	printf("My Output: %i\n", ft_strlcat(dest2, src, len));
// 	printf("My String: %s\n\n", dest2);
// 	// printf("%d", ft_strlen(dest));
// 	return (0);
// }
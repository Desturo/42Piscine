/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 14:30:54 by nschneid          #+#    #+#             */
/*   Updated: 2024/11/21 16:15:41 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	counter;
	unsigned int	dest_pos;

	counter = 0;
	dest_pos = 0;
	while (dest[dest_pos] != '\0')
		dest_pos++;
	while (src[counter] != '\0')
	{
		dest[dest_pos] = src[counter];
		counter++;
		dest_pos++;
	}
	dest[dest_pos] = src[counter];
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	// char test[12] = "\n\r";
// 	char test2[33] = "Hello, ";
// 	// printf("My: %s\n", ft_strcat(test, "test"));
// 	printf("Official: %s", strcat(test2, "World!"));
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:08:30 by nschneid          #+#    #+#             */
/*   Updated: 2024/11/21 16:39:10 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	counter;
	unsigned int	dest_pos;

	counter = 0;
	dest_pos = 0;
	while (dest[dest_pos] != '\0')
		dest_pos++;
	while (src[counter] != '\0' && counter < nb)
	{
		dest[dest_pos] = src[counter];
		counter++;
		dest_pos++;
	}
	dest[dest_pos] = '\0';
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

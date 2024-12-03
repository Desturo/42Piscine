/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:17:05 by nschneid          #+#    #+#             */
/*   Updated: 2024/11/25 21:12:01 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	counter;
	unsigned int	i;

	counter = 0;
	i = 0;
	if (to_find[0] == 0)
		return (str);
	while (str[counter])
	{
		while (str[counter + i] == to_find[i])
		{
			if (to_find[i + 1] == '\0')
				return (&str[counter]);
			i++;
		}
		counter++;
		i = 0;
	}
	return (NULL);
}

// #include <string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char	*haystack = "";
// 	char	*needle = "xxx";

// 	// ft_strstr(haystack, needle);
// 	printf("Official: %s\n", strstr(haystack, needle));
// 	printf("My: %s\n", ft_strstr(haystack, needle));
// 	return (0);
// }
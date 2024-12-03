/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 12:52:36 by nschneid          #+#    #+#             */
/*   Updated: 2024/12/01 19:14:36 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	if (n == 0)
		return (0);
	while (s1[counter] != '\0' && counter < n)
	{
		if (s1[counter] != s2[counter])
			return (s1[counter] - s2[counter]);
		counter++;
	}
	if (s1[counter] == 0 && counter < n)
	{
		return (s1[counter] - s2[counter]);
	}
	return (0);
}

#include <stdio.h>
int	main(void)
{
	char			*str1 = "abcad";
	char			*str2 = "abcaf";
	unsigned int	n = 4;
	printf("Mine: <%d>\n", ft_strncmp(str1, str2, n));
	return (0);
}
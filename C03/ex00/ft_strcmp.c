/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:10:21 by nschneid          #+#    #+#             */
/*   Updated: 2024/12/01 19:16:48 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	counter;

	counter = 0;
	while (s1[counter] != '\0')
	{
		if (s1[counter] != s2[counter])
			return (s1[counter] - s2[counter]);
		counter++;
	}
	if (s2[counter] != '\0')
	{
		return (s1[counter] - s2[counter]);
	}
	return (0);
}

#include <stdio.h>
// #include <string.h>
int	main(void)
{
	printf("My: %d\n", ft_strcmp("abcdefghl", "abcdefghi"));
	// printf("Official: %d\n", strcmp(string, "abcf"));
	return (0);
}
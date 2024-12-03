/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 20:02:42 by nschneid          #+#    #+#             */
/*   Updated: 2024/12/01 20:23:34 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
		counter++;
	return (counter);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*out;
	int		idx;

	len = ft_strlen(src);
	idx = 0;
	out = (char *)malloc((len + 1) * sizeof(char));
	if (!out)
		return (NULL);
	while (idx <= len)
	{
		out[idx] = src[idx];
		idx++;
	}
	return (out);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	*str;
// 	char	*test = "abcdefg";
// 	str = ft_strdup(test);
// 	printf("%s", str);
// }
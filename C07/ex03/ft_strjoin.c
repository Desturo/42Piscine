/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 12:55:21 by nschneid          #+#    #+#             */
/*   Updated: 2024/12/02 13:48:13 by nschneid         ###   ########.fr       */
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

int	combined_len(char **strs, int size, int sep_size)
{
	int	idx = 0;
	int len = 0;
	while (idx < size)
	{
		len +=  ft_strlen(strs[idx++]);
		len += sep_size;
	}
	len -= sep_size;
	
	return (len);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	char	*output;
	int		len;
	int		idx;
	int		sep_size;
	int		counter;

	if (size == 0)
		return((char*)malloc(1));
	sep_size = ft_strlen(sep);
	len = combined_len(strs, size, sep_size);
	output = (char *)malloc(sizeof(char) * len + 1);
	idx = 0;
	len = 0;
	while (idx < size)
	{
		counter = 0;
		while (counter < ft_strlen(strs[idx]))
			output[len++] = strs[idx][counter++];
		counter = 0;
		while (counter < sep_size && idx != size - 1)
			output[len++] = sep[counter++];
		idx++;
	}
	output[len] = 0;
	return (output);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	*strs[] = {"Joey", "Anakin", "Lias", "Charlotte"};
// 	char	*sep = " , ";
// 	char	*str;

// 	str = ft_strjoin(4, strs, sep);
// 	printf("%s\n", str);
// 	return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:57:43 by nschneid          #+#    #+#             */
/*   Updated: 2024/12/03 20:01:51 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char to_check, char *charset)
{
	int	counter;

	counter = 0;
	while (charset[counter])
	{
		if (charset[counter] == to_check)
			return (1);
		counter++;
	}
	return (0);
}

int	get_word_count(char *str, char *charset)
{
	int	output;
	int	idx;

	idx = 0;
	output = 0;
	while (str[idx])
	{
		while (is_sep(str[idx], charset) && str[idx])
			idx++;
		if (str[idx])
			output++;
		while (!is_sep(str[idx], charset) && str[idx])
			idx++;
	}
	return (output);
}

int	ft_word_len(char *str, char *charset)
{
	int	len;

	len = 0;
	while (!is_sep(str[len], charset) && str[len])
		len++;
	return (len);
}

void	fill_output(char **output, char *str, char *charset)
{
	int	idx;
	int	len;
	char *inner;
	int	in_idx;
	int	counter;

	idx = 0;
	len = 0;
	counter = 0;
	while (str[idx])
	{
		while (is_sep(str[idx], charset) && str[idx])
			idx++;
		len = ft_word_len(&str[idx], charset);
		inner = (char *)malloc((len + 1) * sizeof(char));
		while (in_idx < len)
			inner[in_idx++] = str[idx++];
		inner[in_idx] = 0;
		output[counter++] = inner;
		in_idx = 0;
	}
	output[counter] = 0;
}

#include <stdio.h>
char	**ft_split(char *str, char *charset)
{
	int		len;
	char	**output;
	len = get_word_count(str, charset);
	if (len == 0)
	{
		output = (char **)malloc(1 * sizeof(char *));
		output[0] = NULL;
		return (output);
	}
	output = (char **)malloc((len + 1) * sizeof(char *));
	if (!output)
		return (NULL);
	fill_output(output, str, charset);
	return (output);
}

int	main(void)
{
	char	*to_split = "";
	char	*separators = "dsfds";

	char	**split = ft_split(to_split, separators);
	if (!split)
		return (1);
	// while (*split)
	// {
	// 	printf("%s\n", *split);
	// 	split++;
	// }
	printf("%s\n", split[1]);
	return (0);
}
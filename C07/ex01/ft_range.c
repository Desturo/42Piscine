/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 20:26:57 by nschneid          #+#    #+#             */
/*   Updated: 2024/12/02 12:31:29 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*output;
	int	size;
	int	counter;

	counter = 0;
	if (min >= max)
		return (NULL);
	size = max - min;
	output = (int *)malloc(size * sizeof(int));
	while (counter + min < max)
	{
		output[counter] = min + counter;
		counter++;
	}
	return (output);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int *tab;
// 	int	counter;
// 	int	min;
// 	int	max;

// 	min = 1;
// 	max = 6;
// 	tab = ft_range(min, max);
// 	counter = 0;
// 	while (counter < max - min)
// 	{
// 		printf("%d\n", tab[counter]);
// 		counter++;
// 	}
// 	// printf("%d\n", tab[4]);
// 	return (0);
// }
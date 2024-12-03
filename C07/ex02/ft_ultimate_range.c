/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 12:17:10 by nschneid          #+#    #+#             */
/*   Updated: 2024/12/03 19:55:13 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	counter;

	if (min >= max)
		return ((*range = NULL), -1);
	counter = 0;
	size = max - min;
	*range = (int *)malloc(size * sizeof(int));
	if (!*range)
		return (-1);
	while (counter < size)
	{
		(*range)[counter] = min + counter;
		counter++;
	}
	return (size);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int *tab;
// 	int	counter = 0;
// 	int	min = -5;
// 	int	max = 888;
// 	int	size = ft_ultimate_range(&tab, min, max);
	
// 	while (counter < size)
// 	{
// 		printf("%d\n", tab[counter]);
// 		counter++;
// 	}
// 	// printf("%d\n", tab[size - 1]);
// 	return (0);
// }
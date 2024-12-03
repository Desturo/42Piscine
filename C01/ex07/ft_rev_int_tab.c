/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:36:21 by nschneid          #+#    #+#             */
/*   Updated: 2024/11/21 14:50:10 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	front;
	int	back;

	if (size == 0)
		return ;
	front = 0;
	back = size - 1;
	while (front <= (size - 1) / 2)
	{
		temp = tab[back];
		tab[back] = tab[front];
		tab[front] = temp;
		front++;
		back--;
	}
}

#include <stdio.h>
int	main(void)
{
	int counter = 0;
	// int arr[9] = {1,2,3,4,5,6,7,8,9};
	int *arr;
	ft_rev_int_tab(arr, 0);
	while (counter < 9)
	{
		printf("%d, ", arr[counter]);
		counter++;
	}
	return (0);
}
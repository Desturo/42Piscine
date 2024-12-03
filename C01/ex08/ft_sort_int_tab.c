/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 20:29:23 by nschneid          #+#    #+#             */
/*   Updated: 2024/11/19 11:30:07 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap_in_array(int a, int b, int *tab)
{
	int	temp;

	temp = tab[a];
	tab[a] = tab[b];
	tab[b] = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	max;
	int	counter;

	if (size == 0)
		return ;
	max = size - 2;
	counter = 0;
	while (max + 1)
	{
		while (counter <= max)
		{
			if (tab[counter] > tab[counter + 1])
			{
				ft_swap_in_array(counter, counter + 1, tab);
			}
			counter++;
		}
		max--;
		counter = 0;
	}
}

/* #include <stdio.h>

void	ft_put_int_tab(int *tab, int size)
{
	int	counter;
	
	counter = 0;
	while (counter < size)
	{
		printf("%d", tab[counter]);
		counter++;
	}
	printf("\n");
}
int	main(void)
{
	// int arr[11] = {8,2,7,3,1,9,4,4,2,8,2};
	int *arr;
	ft_sort_int_tab(arr, 0);
	ft_put_int_tab(arr, 0);
	return (0);
} */
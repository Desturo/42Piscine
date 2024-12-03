/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 19:47:57 by nschneid          #+#    #+#             */
/*   Updated: 2024/11/17 21:12:34 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/* 
int	main(void)
{
	int	a;
	int	b;

	a = 8;
	b = 1;
	ft_swap(&a, &b);
	printf("%d, %d", a, b);
	return (0);
} */

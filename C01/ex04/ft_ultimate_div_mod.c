/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 21:28:32 by nschneid          #+#    #+#             */
/*   Updated: 2024/11/17 22:11:01 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_mod;
	int	temp_div;

	temp_div = *a / *b;
	temp_mod = *a % *b;
	*a = temp_div;
	*b = temp_mod;
}
/* 
int	main(void)
{
	int	a;
	int	b;

	a = 8;
	b = 5;
	ft_ultimate_div_mod(&a, &b);
	printf("div: %d\nmod: %d\n", a, b);
	return (0);
} */

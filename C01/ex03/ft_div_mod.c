/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 21:12:15 by nschneid          #+#    #+#             */
/*   Updated: 2024/11/17 21:27:08 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/* 
int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 8;
	b = 5;
	div = 0;
	mod = 0;
	ft_div_mod(a, b, &div, &mod);
	printf("a: %d\nb: %d\ndiv: %d\nmod: %d\n", a, b, div, mod);
	return (0);
} */

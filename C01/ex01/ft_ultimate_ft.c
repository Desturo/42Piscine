/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 17:03:16 by nschneid          #+#    #+#             */
/*   Updated: 2024/11/19 20:00:40 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{
	int *********nbr8;
	int	********nbr7;
	int	*******nbr6;
	int	******nbr5;
	int	*****nbr4;
	int	****nbr3;
	int	***nbr2;
	int	**nbr1;
	int	*nbr0;
	int nbr;

	nbr0 = &nbr;
	nbr1 = &nbr0;
	nbr2 = &nbr1;
	nbr3 = &nbr2;
	nbr4 = &nbr3;
	nbr5 = &nbr4;
	nbr6 = &nbr5;
	nbr7 = &nbr6;
	nbr8 = &nbr7;

	ft_ultimate_ft(nbr8);

	printf("%d", nbr);
	return (0);
}

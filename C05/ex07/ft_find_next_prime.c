/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 20:59:44 by nschneid          #+#    #+#             */
/*   Updated: 2024/12/02 21:31:37 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	front;
	long	back;
	long	middle;

	middle = 0;
	front = 1;
	back = nb / 2;
	if (nb < 1)
		return (0);
	else if (nb == 1)
		return (1);
	while (front <= back)
	{
		middle = (front + back) / 2;
		if (middle * middle == nb)
			return ((int)middle);
		else if (middle * middle < nb)
			front = middle + 1;
		else
			back = middle - 1;
	}
	return (back);
}

int	ft_is_prime(int nb)
{
	int	sqrt;

	if (nb == 2)
		return (1);
	else if (nb < 2)
		return (0);
	else if (nb % 2 == 0)
		return (0);
	sqrt = ft_sqrt(nb);
	while (sqrt >= 3)
	{
		if (nb % sqrt == 0)
			return (0);
		sqrt--;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

// #include <limits.h>
// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d", ft_find_next_prime(INT_MAX - 2));
// 	return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 19:23:41 by nschneid          #+#    #+#             */
/*   Updated: 2024/12/02 21:30:30 by nschneid         ###   ########.fr       */
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
	return (0);
}

// #include <limits.h>
// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d", ft_sqrt(2147395600));
// 	return (0);
// }
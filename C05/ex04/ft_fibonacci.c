/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 14:35:09 by nschneid          #+#    #+#             */
/*   Updated: 2024/12/02 21:31:56 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// int	ft_fibonacci(int index)
// {
// 	int	current;
// 	int	prev1;
// 	int	prev2;

// 	current = 1;
// 	prev1 = 0;
// 	prev2 = 0;
// 	if (index <= 0)
// 		return ((index != 0) * -1);
// 	while (index > 1)
// 	{
// 		prev2 = prev1;
// 		prev1 = current;
// 		current = prev1 + prev2;
// 		index--;
// 	}
// 	return (current);
// }

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index <= 1)
		return (index);
	else
		return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d", ft_fibonacci(-4));
// 	return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 19:20:34 by nschneid          #+#    #+#             */
/*   Updated: 2024/11/17 04:03:33 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	current_number;

	current_number = 48;
	while (current_number <= 57)
	{
		write(1, &current_number, 1);
		current_number = current_number + 1;
	}
}
/* 
int	main(void)
{
	ft_print_numbers();
	return (0);
} */

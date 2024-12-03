/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 18:32:32 by nschneid          #+#    #+#             */
/*   Updated: 2024/11/17 04:03:34 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	current_letter;

	current_letter = 122;
	while (current_letter >= 97)
	{
		write(1, &current_letter, 1);
		current_letter = current_letter - 1;
	}
}
/* 
int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
} */

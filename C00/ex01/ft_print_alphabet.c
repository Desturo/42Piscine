/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:52:43 by nschneid          #+#    #+#             */
/*   Updated: 2024/11/17 04:03:32 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	current_letter;

	current_letter = 97;
	while (current_letter <= 122)
	{
		write(1, &current_letter, 1);
		current_letter = current_letter + 1;
	}
}
/* 
int	main(void)
{
	ft_print_alphabet();
	return (0);
} */

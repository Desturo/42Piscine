/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 22:06:54 by nschneid          #+#    #+#             */
/*   Updated: 2024/11/25 20:24:09 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 20:11:37 by nschneid          #+#    #+#             */
/*   Updated: 2024/11/25 20:23:02 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

int	check_edgecases(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (1);
	}
	else if (nb == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	else
		return (0);
}

int	int_digit_count(int nb)
{
	int	length;

	length = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
		length++;
	while (nb != 0)
	{
		nb = nb / 10;
		length++;
	}
	return (length);
}

bool	fill_end(char *str, int start)
{
	int	counter;

	counter = start;
	while (counter < 12)
	{
		str[counter] = '\0';
		counter++;
	}
	return (true);
}

void	ft_putnbr(int nb)
{
	char	output_string[12];
	int		num_size;
	int		counter;

	output_string[11] = '\0';
	counter = 0;
	if (check_edgecases(nb))
		return ;
	num_size = int_digit_count(nb);
	fill_end(output_string, num_size);
	if (nb < 0)
	{
		output_string[0] = '-';
		nb *= -1;
	}
	while (nb != 0)
	{
		output_string[--num_size] = (nb % 10) + '0';
		nb /= 10;
	}
	counter = 0;
	while (output_string[counter])
		write(1, &output_string[counter++], 1);
}
/* 
int	main(void)
{
	ft_putnbr(0);
	return (0);
} */

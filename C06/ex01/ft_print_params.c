/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 10:10:01 by nschneid          #+#    #+#             */
/*   Updated: 2024/12/01 19:45:54 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	if (argc < 2)
		return (1);
	argv++;
	while (*argv)
	{
		while (**argv)
			write(1, (*argv)++, 1);
		write(1, "\n", 1);
		argv++;
	}
	return (0);
}

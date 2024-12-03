/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 10:28:51 by nschneid          #+#    #+#             */
/*   Updated: 2024/12/01 19:45:27 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (1);
	while (argc - 1 > 0)
	{
		while (*argv[argc - 1])
			write(1, (argv[argc - 1])++, 1);
		argc--;
		write(1, "\n", 1);
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 10:34:04 by nschneid          #+#    #+#             */
/*   Updated: 2024/12/03 19:44:31 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	counter;

	counter = 0;
	while (s1[counter] != '\0')
	{
		if (s1[counter] != s2[counter])
			return (s1[counter] - s2[counter]);
		counter++;
	}
	if (s2[counter] != '\0')
	{
		return (s1[counter] - s2[counter]);
	}
	return (0);
}

void	print_params(int argc, char **argv)
{
	int	counter;
	int	idx;

	counter = 1;
	idx = 0;
	while (counter < argc)
	{
		while (argv[counter][idx])
		{
			write(1, &argv[counter][idx], 1);
			idx++;
		}
		idx = 0;
		write(1, "\n", 1);
		counter++;
	}
}

int	main(int ac, char *av[])
{
	int		idx;
	char	*temp;
	int		max;

	idx = 1;
	max = ac - 1;
	if (ac < 2)
		return (1);
	while (max)
	{
		while (idx < max)
		{
			if (ft_strcmp(av[idx], av[idx + 1]) > 0)
			{
				temp = av[idx];
				av[idx] = av[idx + 1];
				av[idx + 1] = temp;
			}
			idx++;
		}
		idx = 1;
		max--;
	}
	print_params(ac, av);
	return (0);
}

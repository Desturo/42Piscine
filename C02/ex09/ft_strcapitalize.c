/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 11:16:00 by nschneid          #+#    #+#             */
/*   Updated: 2024/11/20 15:45:14 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	is_alpha(char to_check)
{
	if (to_check >= 'a' && to_check <= 'z')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (i == 0 && is_alpha(str[i]))
			str[i] -= 32;
		else if ((str[i - 1] < '0') && is_alpha(str[i]))
			str[i] -= 32;
		else if ((str[i - 1] > '9' && str[i - 1] < 'A') && is_alpha(str[i]))
			str[i] -= 32;
		else if ((str[i - 1] > 'Z' && str[i - 1] < 'a') && is_alpha(str[i]))
			str[i] -= 32;
		else if ((str[i - 1] > 'z') && is_alpha(str[i]))
			str[i] -= 32;
		i++;
	}
	return (str);
}
/* 
#include <stdio.h>

int	main(void)
{

	char	test[20] = "HELLO";
	ft_strcapitalize(test);
	printf("%s", test);
	return (0);
} */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rserafim <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 13:30:40 by rserafim          #+#    #+#             */
/*   Updated: 2021/11/08 08:57:48 by rserafim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	int		signe;
	size_t	result;

	i = 0;
	signe = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 8 && str[i] <= 13))
		i++;
	if (str[i] == 45)
	{
		signe = -1;
		i++;
	}
	else if (str[i] == 43)
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (str[i] - '0' + (result * 10));
		i++;
	}
	return (result * signe);
}
/*
int	main()
{
	printf("%d\n", ft_atoi("       -+-++-asd42"));
}*/

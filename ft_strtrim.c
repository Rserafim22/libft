/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strim.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rserafim <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 13:01:37 by rserafim          #+#    #+#             */
/*   Updated: 2021/11/02 16:54:41 by rserafim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isset(char const *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_str;
	size_t	debut;
	size_t	fin;
	size_t	new_size;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	debut = 0;
	while (s1[debut] && ft_isset(set, s1[debut]))
		debut++;
	fin = ft_strlen(s1);
	while (fin > debut && ft_isset(set, s1[fin - 1]))
		fin--;
	new_size = fin - debut + 1;
	new_str = (char *)malloc(sizeof(*s1) * new_size);
	if (!new_str)
		return (NULL);
	i = 0;
	while (debut < fin)
	{
		new_str[i++] = s1[debut++];
	}
	new_str[i] = '\0';
	return (new_str);
}
/*
int	main()
{
	printf("%s\n", ft_strtrim("oohoooozebioolooo", "ohl" ));
}*/

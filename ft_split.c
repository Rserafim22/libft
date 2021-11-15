/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rserafim <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:46:08 by rserafim          #+#    #+#             */
/*   Updated: 2021/11/02 13:08:23 by rserafim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_words_counter(const char *str, char c)
{
	int	count;

	count = 0;
	while (*str == c && *str)
		str++;
	while (*str)
	{
		count++;
		while (*str && *str != c)
			str++;
		while (*str == c && *str)
			str++;
	}
	return (count);
}

static int	ft_len(const char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

static void	ft_free(char **result, int i)
{
	while (i--)
		free(result[i]);
	free(result);
	return ;
}

char	**ft_split(const char *s, char c)
{
	char	**result;
	int		i;
	int		count;

	i = 0;
	if (!s)
		return (NULL);
	count = ft_words_counter((char *)s, c);
	result = malloc(sizeof(char *) * (count + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i < count)
	{
		while (*s == c && *s)
			s++;
		result[i] = ft_substr((char *)s, 0, ft_len((char *)s, c));
		if (result[i] == NULL)
			ft_free(result, i);
		s = s + ft_len((char *)s, c);
		i++;
	}
	result[i] = NULL;
	return (result);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rserafim <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:40:02 by rserafim          #+#    #+#             */
/*   Updated: 2021/10/20 14:04:09 by rserafim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*zebi;
	unsigned char	cc;

	i = 0;
	zebi = (unsigned char *) s;
	cc = (unsigned char)c;
	while (i < n)
	{
		if (*zebi == cc)
			return (zebi);
		i++;
		zebi++;
	}
	return (NULL);
}
/*
int	main()
{
	char	*s = "salut";
//	s = strdup("salut");
	printf("%s\n", s);
	printf("%s\n", ft_memchr(s, 'u', 2));
}*/

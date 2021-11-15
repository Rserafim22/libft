/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rserafim <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 13:47:35 by rserafim          #+#    #+#             */
/*   Updated: 2021/10/20 13:48:22 by rserafim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char			*pb;
	unsigned char	cc;

	pb = b;
	cc = (unsigned char) c;
	while (len--)
	{
		*pb = cc;
		pb++;
	}
	return (b);
}
/*
int	main()
{
	char *str;
	int	c = 'o';
	size_t	len = 2;
	str = ft_strdup("salut");
	

	printf("%s\n", str);
	ft_memset(((void *)0), c, len);
	printf("%s\n", str);
}*/

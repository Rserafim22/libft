/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rserafim <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:49:38 by rserafim          #+#    #+#             */
/*   Updated: 2021/10/20 13:46:26 by rserafim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (src < dst)
	{
		while (len)
		{
			len--;
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
		}
	}
	if (src > dst)
	{
		ft_memcpy(dst, src, len);
	}
	return (dst);
}
/*
int	main()
{
	char *src[50] = "salut";
	char *dst[50] = "hello";
	size_t len = 5;
	printf("%s\n", dst);
	memmove(dst, src, len);
	printf("%s\n", dst);
}*/

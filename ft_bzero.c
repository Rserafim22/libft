/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rserafim <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 13:59:23 by rserafim          #+#    #+#             */
/*   Updated: 2021/10/20 13:59:26 by rserafim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*
int main()
{
	char	*s;
	size_t	n = 0;

	s = ft_strdup("saluuuuuut");
	printf("%s\n", s);
	ft_bzero(s, n);
	printf("%s\n", s);
}*/

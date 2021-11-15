/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rserafim <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 09:21:00 by rserafim          #+#    #+#             */
/*   Updated: 2021/11/02 16:44:34 by rserafim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s11;
	unsigned char	*s22;

	i = 0;
	s11 = (unsigned char *)s1;
	s22 = (unsigned char *)s2;
	while (s11[i] == s22[i] && i < n && s11[i] != '\0' )
		i++;
	if (i == n)
		return (0);
	else
		return (s11[i] - s22[i]);
}
/*
int	main(void)
{
	const char *s1 = "ll";
	const char *s2 = "oh";
	size_t n = 20;

	printf("%d\n", strncmp(s1,s2,n));
	printf("%d\n", ft_strncmp(s1,s2,n));
}*/

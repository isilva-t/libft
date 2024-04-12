/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isilva-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 12:36:20 by isilva-t          #+#    #+#             */
/*   Updated: 2024/04/12 12:54:12 by isilva-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*res;

	res = (char *)s;
	if (n == 0)
		return (NULL);
	while (n != 0)
	{
		if (*res == c)
			return (res);
		++res;
		--n;
	}
	return (NULL);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "teste131234";
	int	c = '1';
	char	*fun;
	size_t	n = 15;

	fun = (char *)ft_memchr(str, c, n);
	printf("%s", fun);
}*/

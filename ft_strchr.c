/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isilva-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 11:25:15 by isilva-t          #+#    #+#             */
/*   Updated: 2024/04/12 11:51:29 by isilva-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	
	str = (char *)s;
	while (*str != c)
	{
		if (*str == '\0')
			return (NULL);
		str++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	int	c = 'e';
	const char	str[] = "teste";

	printf("%d\n%s\n\n", c, ft_strchr(str, c));
}*/

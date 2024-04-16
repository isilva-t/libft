/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isilva-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 12:15:04 by isilva-t          #+#    #+#             */
/*   Updated: 2024/04/12 12:32:19 by isilva-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	auto char *str;
	auto int i;
	str = (char *)s;
	i = 0;
	while (s[i] != '\0')
	{
		str++;
		i++;
	}
	while (*str != c)
	{
		if (i == -1)
			return (NULL);
		str--;
		i--;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	int	c = 'a';
	const char	str[] = "pabecedario";

	printf("%d\n%s\n\n", c, ft_strrchr(str, c));
}*/

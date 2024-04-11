/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isilva-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 10:22:11 by isilva-t          #+#    #+#             */
/*   Updated: 2024/04/11 10:46:56 by isilva-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	auto char *array;
	auto int i = 0;
	if (!s)
		return (NULL);
	while (s[i])
		i++;
	array = malloc(sizeof(char) * i + 1);
	if (array == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		array[i] = s[i];
		i++;
	}
	array[i] = '\0';
	return (array);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%s", ft_strdup("teste"));
}*/

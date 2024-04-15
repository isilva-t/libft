/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isilva-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 13:37:17 by isilva-t          #+#    #+#             */
/*   Updated: 2024/04/12 18:10:01 by isilva-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!big || !little)
		return (NULL);
	i = 0;
	while (big[i] != '\0' && little[j] != '\0' && i < len)
	{
		j = 0;
		if (big[i] == little[0])
		{
			while (big[i + j] == little[j] && (i + j) < len)
			{
				if (little[j + 1] == '\0')
					return ((char *)big + i);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int	main(void)
{
	char	big[] = "frase_de_teste";
	char	little[] = "ase";

	size_t	len = 10;

	printf("\n%s\n%s\n", big, ft_strnstr(big, little, len));
}*/

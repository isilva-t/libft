/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isilva-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 13:19:27 by isilva-t          #+#    #+#             */
/*   Updated: 2024/04/11 13:35:08 by isilva-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((const unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	src[] = "teste1234";
	char	dest[] = "11111";
	size_t	n;
	size_t	i = 0;

	n = 2;
	printf("%s\n", src);
	printf("%s\n\n", dest);
	ft_memcpy(dest, src, n);
	printf("dest a seguir 'a quebta linha \n");
	printf("%s", dest);
}*/

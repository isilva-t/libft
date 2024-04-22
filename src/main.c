/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isilva-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:08:36 by isilva-t          #+#    #+#             */
/*   Updated: 2024/04/16 13:16:17 by isilva-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <bsd/string.h>

int	main(void)
{
	char	*str = " teste ft_split ";
	char	c = ' ';
	size_t	i; 
	
	i = count_words(str, c);

	printf("%s \n\n", str);
	while (i > 0)
	{
	printf("%s\n", (ft_split(str, c))[i]);
		i--;
	}
}


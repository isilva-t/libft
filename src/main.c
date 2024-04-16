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

#include <libft.h>

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		printf(" number of arguments incorrect, try again!");
		return (0);
	}
	printf("MY:	%d\n", ft_atoi(&av[1][0]));
	printf("ORIGINAL: %d\n", atoi(&av[1][0]));
}

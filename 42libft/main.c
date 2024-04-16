/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isilva-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:08:36 by isilva-t          #+#    #+#             */
/*   Updated: 2024/04/15 15:08:44 by isilva-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char c[] = "123456789abcdef";
	
	printf("\n____Original FT____\n");	
	printf("%s\n\n", strdup(c));
	
	printf("______My FT_____\n");
	printf("%s\n", ft_strdup(c));
	
	
}

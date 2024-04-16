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

#include <string.h>
#include <stdio.h>

int	main(void)
{
	const char src[] = "12345";
	char ost[] = "destino_com_";
	size_t size;
	
	size = 20;

	printf("variavel src 	    : %s\nvariavel dst inicial: %s\n", src, ost);
	
	printf("\nreturn da ORIGINAL strlcat: %u\n", strlcat(ost, src, size));

	
	printf("variavel dst depois ORIGINAL: %s\n", ost);

}

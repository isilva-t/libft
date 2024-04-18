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
#include <string.h>
#include <bsd/string.h>


int     main(void)
{
        const char      s1[] = "lorem ipsum dolor sit amet";
        const char      set[] = "te";

        printf("%s", ft_strtrim(s1, set));
}


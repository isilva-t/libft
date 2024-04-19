/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isilva-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 11:20:42 by isilva-t          #+#    #+#             */
/*   Updated: 2024/04/19 11:31:23 by isilva-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*str;

	if (!s1 || !set)
		return (NULL);
		
	start = 0;
	//verifica o ponto final do array
	end = ft_strlen(s1) - 1;
	
	//verifica inicio da palavra, se tem o set de caracteres
	while (ft_strchr(set, s1[start]) && start <= end)
		start++;
		
	// caso o valor de start seja maior que o de end, colorscheme
	//retorna strdup s1 + end + 1
	if (start > end)
		return (ft_strdup(""));
		//return (ft_strdup(s1 + end + 1));

		
	//verifica final da palavra, se tem set de caracteres	
	while (ft_strchr(set, s1[end]) && end >= 0)
		end--;
		
	//aloca a memoria necessaria para a str a retornar
	str = malloc(end - start + 2);
	if (!str)
		return (NULL);
		
	//copia com strlcopy a string que temos para o novo ponteiro criado por strlcpy
	ft_strlcpy(str, &s1[start], end - start + 2);
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	const char	s1[] = "12";
	const char	set[] = "12";
	
	printf("%s, %s\n", s1, set);
	printf("%s\n", ft_strtrim(s1, set));

}*/

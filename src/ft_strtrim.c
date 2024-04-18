/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isilva-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:29:26 by isilva-t          #+#    #+#             */
/*   Updated: 2024/04/18 16:07:07 by isilva-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	int tab[256] = {0};
	int	beg;
	int	end;
	int	i;
	int	j;
	char	*array;

	if (!s1 && !set)
		return (ft_strdup(""));	
	i = 0;
	while (set[i] != '\0')
	{
		tab[(int)set[i]] = (int)set[i];
		i++;
	}
	beg = 0;
	while (s1[beg] == (char)tab[(int)s1[beg]])
		beg++;
	end = ft_strlen(s1);
	while (s1[end] == (char)tab[(int)s1[end]])
		end--;
	i = end - beg;
	array = malloc(sizeof(char) * i + 2);
	if (array == NULL)
		return (NULL);
	j = 0;
	while (j <= i)
		array[j++] = s1[beg++];
	array[j] = '\0';
	
	return (array);
}
/*
#include <stdio.h>
int	main(void)
{
	const char	s1[] = "1234521";
	const char	set[] = "12";

	ft_strtrim(s1, set);
}*/

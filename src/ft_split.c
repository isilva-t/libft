/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isilva-t <isilva-t@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 08:12:08 by isilva-t          #+#    #+#             */
/*   Updated: 2024/04/22 16:04:25 by isilva-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	count_words(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (*(s + i))
	{
		if (*(s + i) != c)
		{
			count++;
			while (*(s + i) && *(s + i) != c)
				i++;
		}
		else if (*(s + i) == c)
		i++;
	}
	return (count);
}

static size_t	get_len(const char *s, char c)
{
	size_t	len;

	len = 0;
	while ((s + len) && *(s + len) != c)
		len++;
	return (len);
}

char	**split(char const *s, char c, char **array, size_t n_words)
{
	size_t	in_word;
	size_t	on_char;

	in_word= 0;
	on_char = 0;
	while (in_word < n_words)
	{
		while (*(s + on_char) && *(s + on_char) == c)
			on_char++;
		*(array + in_word) = ft_substr(s, on_char, get_len((s + on_char), c));
		if (!*(array + in_word))
		{
			//para fazer o FREE AQUI, FALTA A FT
			return (NULL);
		}
		while (*(s + on_char) && *(s + on_char) != c)
		{
			on_char++;
		}
		printf("%s\n", *(array + in_word));
		in_word++;
	}
	*(array + in_word) = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	size_t	n_words;
	char	**array;

	n_words = count_words(s, c);
	if (!s)
		return (NULL);
	array = (char **)malloc(sizeof(char*) * (n_words + 1));
	if (!array)
		return (NULL);
	array = split(s, c, array, n_words);
	return (array);
}
/*
int	main(void)
{
	char const	*str = " teste ft_split vamos a isso! ";
	char	c = ' ';

	printf("%s \n\n", str);
	ft_split(str, c);
}*/


//TEST get_len 
/*#include <stdio.h>
int	main(void)
{
	char	*str = "vamos testar get len";
	char	c = ' ';

	printf("%s\n%c\nresult: %zd\n", str, c, get_len(str, c));
}*/


//TEST COUNT_WORDS
/*
#include <stdio.h>
int	main(void)
{
	char	*str = " eu tenho bolachas, queres? ";
	char	c = ' ';

	printf("%s\nNr palavras: %zu\n", str, count_words(str, c));
}*/

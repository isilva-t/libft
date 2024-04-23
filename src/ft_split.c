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

static int	count_words(const char *s, char c)
{
	int	i;
	int	count;

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

static int	get_len(const char *s, char c)
{
	int	len;

	len = 0;
	while (*(s + len) && *(s + len) != c)
	{
		len++;
	}
	return (len);
}

void	free_mem(int in_word, char **array)
{
	while (in_word >= 0)
	{
		free(*(array + in_word));
		in_word--;
	}
	free(array);
}

char	**split(char const *s, char c, char **array, int n_words)
{
	int	in_word;
	int	on_char;

	in_word = 0;
	on_char = 0;
	while (in_word < n_words)
	{
		while (*(s + on_char) && *(s + on_char) == c)
			on_char++;
		*(array + in_word) = ft_substr(s, on_char, get_len((s + on_char), c));
		if (!*(array + in_word))
		{
			free_mem(in_word, array);
			return (NULL);
		}
		while (*(s + on_char) && *(s + on_char) != c)
		{
			on_char++;
		}
		in_word++;
	}
	*(array + in_word) = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	int		n_words;
	char	**array;

	n_words = count_words(s, c);
	if (!s)
		return (NULL);
	array = (char **)malloc(sizeof(char *) * (n_words + 1));
	if (!array)
		return (NULL);
	array = split(s, c, array, n_words);
	return (array);
}
/*//TEST FT_SPLIT
int	main(void)
{
	char	*str = ft_strdup(" vamos la testar ");
    char	c = ' ';
	char	**array;
	int	i = 0;

    printf("%s\n\n", str);
	printf("nr palavras: %d\n", count_words(str, c));
    array = ft_split(str, c);
	while (i < count_words(str, c))
	{
		printf("%s \n", *(array + i));
		i++;
	}
	free_mem((count_words(str, c) - 1), array);
  free (str);
	return (0);
}*/
// TEST get_len
/*#include <stdio.h>
int	main(void)
{
        char	*str = "vamos testar get len";
        char	c = ' ';

        printf("%s\n%c\nresult: %zd\n", str, c, get_len(str, c));
}*/
// TEST COUNT_WORDS
/*
#include <stdio.h>
int	main(void)
{
        char	*str = " eu tenho bolachas, queres? ";
        char	c = ' ';

        printf("%s\nNr palavras: %zu\n", str, count_words(str, c));
}*/

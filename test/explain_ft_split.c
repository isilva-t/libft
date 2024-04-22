#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
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

//		ft_substr(s, j, get_word_len(&*(s + j), c));
static size_t	get_word_len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*(s + i) && *(s + i) != c)
		i++;
	return (i);
}

static void	free_array(size_t i, char **array)
{
	while (i > 0)
	{
		i--;
		free(*(array + i));
	}
	free(array);
}

static char	**split(char const *s, char c, char **array, size_t words_count)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	// enquanto iteracao menor que contador palavras
	while (i < words_count)
	{
		//enquanto a posicao seguinte nao for nula , E, 
		//posicao seguinte for igual ao separador
		while (*(s + j) && *(s + j) == c)
			j++; // incrementa "posicao seguinte"
			
		// posicao atual do array recebe
		// ft_substr	
		*(array + i) = ft_substr(s, j, get_word_len(&*(s + j), c));
		
		if (!*(array + i))
		{
			free_array(i, array);
			return (NULL);
		}
		
		while (*(s + j) && *(s + j) != c)
			j++;
			
		i++;
		
	}
	*(array + i) = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	words;

	// se nao houver string, retorna NULL
	if (!s)
		return (NULL);
	
	//variavel palavras, recebe resultado de FUNCAO COUNT_WORDS
	words = count_words(s, c);
	
	//PARTE PARA ALOCAR MEMORIA
	//array recebe
	// CHAR PONTEIRO PONTEIRO?
	// COM SIZE OF CHAR *?
	// multibplicando (nr de palavras + 1) - entre parentesess
	// porque precisamos de 1 caractere a mais para o nulo,
	// de cada palavra em cada ponteiro
	array = (char **)malloc(sizeof(char *) * (words + 1));
	// se nao ha' array, retorna nulo
	if (!array)
		return (NULL);
		
	// feita alocacao, vamos preencher os arrays com as palavras
	// enviando a frase completa, separador, o array de arrays, e o nr de palavras
	array = split(s, c, array, words);
	return (array);
}


CHAT GPT
User
in this function get_word_len(&*(s + j), c)), why a use of "&"?
ChatGPT

In the expression &*(s + j), the & operator is being used to obtain the address of the value resulting from *(s + j).

Let's break it down:

    (s + j) calculates the memory address of the j-th element of the array s.
    *(s + j) dereferences that address, giving you the value stored at that memory location.
    Finally, &*(s + j) takes the address of that value, effectively giving you the address of the j-th element of the array s.

This can be useful in scenarios where you need to pass a pointer to a function or manipulate memory addresses directly.

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isilva-t <isilva-t@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 18:32:56 by isilva-t          #+#    #+#             */
/*   Updated: 2024/04/26 19:14:10 by isilva-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
// A FUNCAO ACIMA PASSA NA FRANCINETTE, MAS EU PRECISO SABER TESTAR
#include <stdio.h>
static void	print_list(t_list *lst)
{
	printf("result:\n");
	while (lst)
	{
		printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}
}
// NECESSARIO ENTENDER PORQUE ESTA PORCARIA NAO FUNCIONA
void	f(void *cont)
{
	cont = "ja foste";
}

static void	fun_test(void *lst)
{
	lst = NULL;
}

int	main(void)
{
	int	size;
	t_list	**test;
	t_list	*lst;
	t_list	*new;
	t_list	*temp;

	lst = ft_lstnew("teste_1");
	lst->next = ft_lstnew("teste_2");

	printf("1\n");

	ft_lstiter(lst, (void *)f);

	printf("2\n");

	print_list(lst); //QUANDO CHAMA ESTA FUNCAO, VERIFICO QUE NADA FOI ALTERADO
	test = &lst;
	
	printf("3\n");

	ft_lstclear(test, fun_test);
	printf("must be freed!!\n");
}


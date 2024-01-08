/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrahimi <hbrahimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 12:44:27 by hbrahimi          #+#    #+#             */
/*   Updated: 2024/01/08 21:51:18 by hbrahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
void f(void *kda)
{
	free(kda);
}
#include <stdio.h>
int main()
{

	t_list *node1 = ft_lstnew(ft_strdup("aaa"));
	t_list *node2 = ft_lstnew(ft_strdup("bbb"));
	t_list *node3 = ft_lstnew(ft_strdup("ccc"));
	t_list *head = NULL;	
	ft_lstadd_back(&head, node1);
	ft_lstadd_back(&head, node2);
	ft_lstadd_back(&head, node3);
	ft_lstiter(head, f);
	while (head)
	{
		printf("%s\n",head->content);
		head = head->next;
	}
}
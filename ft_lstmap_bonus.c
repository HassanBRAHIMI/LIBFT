/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrahimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:33:58 by hbrahimi          #+#    #+#             */
/*   Updated: 2023/12/19 22:40:04 by hbrahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	void	*kda;
	t_list	*new_node;
	t_list	*new_list;

	new_list = NULL;
	while (lst)
	{
		kda = f(lst->content);
		new_node = ft_lstnew(kda);
		if (!new_node)
		{
			free(kda);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

/* void	*example_function(void *content)
// {
// 	int	*value = (int *)content;
// 	int	*new_value = (int *)malloc(sizeof(int));
// 	if (!new_value)
// 		return (NULL);
// 	*new_value = *value * 2;
// 	return (new_value);
// }

// // Example function to be passed to ft_lstclear
// void	example_del(void *content)
// {
// 	free(content);
// }

// int	main(void)
// {
// 	t_list	*lst = NULL;
// 	t_list	*new_list;

// 	// Example: Create a linked list with values 1, 2, 3
// 	for (int i = 1; i <= 3; ++i)
// 		ft_lstadd_back(&lst, ft_lstnew(&i));

// 	// Use ft_lstmap to create a new list with values doubled
// 	new_list = ft_lstmap(lst, &example_function, &example_del);

// 	// Display the original and new lists
// 	printf("Original list: ");
// 	t_list	*temp = lst;
// 	while (temp)
// 	{
// 		printf("%d ", *(int *)temp->content);
// 		temp = temp->next;
// 	}
// 	printf("\n");

// 	printf("New list (doubled): ");
// 	temp = new_list;
// 	while (temp)
// 	{
// 		printf("%d ", *(int *)temp->content);
// 		temp = temp->next;
// 	}
// 	printf("\n");

// 	// Clean up memory
// 	// ft_lstclear(&lst, &example_del);
// 	ft_lstclear(&new_list, &example_del);

// 	return (0);
// }*/

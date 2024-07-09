/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkunnath <nkunnath@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 16:12:13 by nkunnath          #+#    #+#             */
/*   Updated: 2024/07/08 16:12:15 by nkunnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*temp;
	void	*new_content;

	head = NULL;
	while (lst != NULL)
	{
		new_content = (*f)(lst->content);
		if (new_content == NULL)
		{
			ft_lstclear(&head, *del);
			return (head);
		}
		temp = ft_lstnew(new_content);
		if (temp == NULL)
		{
			(*del)(new_content);
			ft_lstclear(&head, *del);
			return (head);
		}
		ft_lstadd_back(&head, temp);
		lst = lst->next;
	}
	return (head);
}

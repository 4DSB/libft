/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_find.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 08:53:02 by amittal           #+#    #+#             */
/*   Updated: 2017/07/10 08:53:04 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument:	1. Pointer to the first link of a list.
**				2.
**				3.
** Operation: 	.
** Approach: 	.
** Return: 		.
*/

#include "libft.h"

t_list	*ft_lst_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list	*list_ptr;

	list_ptr = begin_list;
	while (list_ptr)
	{
		if ((cmp)(list_ptr->content, data_ref) == 0)
			return (list_ptr);
		list_ptr = list_ptr->next;
	}
	return (NULL);
}

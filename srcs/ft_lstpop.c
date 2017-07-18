/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/29 13:35:56 by amittal           #+#    #+#             */
/*   Updated: 2017/06/29 13:35:56 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**				Doesn't work yet.
** Argument:	1. A pointer’s to the first link of a list.
** Operation: 	Pops the last element of the list.
** Return: 		A pointer’s to the first link of a list with the poped element.
**				NULL if the address passed does not exist.
*/

#include "libft.h"

t_list	*ft_lstpop(t_list **alst)
{
	if (!alst)
		return (NULL);
	while ((*alst)->next && (*alst)->next->next)
		*alst = (*alst)->next;
	(*alst)->next = NULL;
	return (*alst);
}

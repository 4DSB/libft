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

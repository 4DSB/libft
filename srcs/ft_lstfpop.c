/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfpop.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/29 13:45:10 by amittal           #+#    #+#             */
/*   Updated: 2017/07/02 00:12:31 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstfpop(t_list **alst)
{
	t_list	*pop;

	if (!alst)
		return (NULL);
	pop = *alst;
	pop->next = NULL;
	*alst = (*alst)->next;
	return (pop);
}
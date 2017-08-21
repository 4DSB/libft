/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_if.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <amittal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 01:14:58 by amittal           #+#    #+#             */
/*   Updated: 2017/08/21 01:14:59 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_lstiter_if(t_list *lst, void (*f)(t_list *e), int (*g)(t_list *e))
{
	while (lst)
	{
		if (g(lst))
			f(lst);
		lst = lst->next;
	}
}

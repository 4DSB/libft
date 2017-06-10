/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 10:19:40 by amittal           #+#    #+#             */
/*   Updated: 2017/06/08 20:55:24 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int		ft_isupper(int c)
{
	return (c <= 'Z' && c >= 'A');
}

static int		ft_islower(int c)
{
	return (c <= 'z' && c >= 'a');
}

int				ft_isalpha(int c)
{
	return (ft_islower(c) || ft_isupper(c));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 10:21:26 by amittal           #+#    #+#             */
/*   Updated: 2017/06/08 10:21:31 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int        ft_isprint(int c)
{
	return (c >= 32 && c < 127);
}

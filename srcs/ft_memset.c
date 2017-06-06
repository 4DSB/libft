/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/05 10:54:49 by amittal           #+#    #+#             */
/*   Updated: 2017/06/05 20:54:05 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char *ret;
	size_t i;
	ret = b;
	i = 0;
	//write(1, ret, 20);
	//while(b)
	//{
	//	str_len++;
	//}
	while (i < len)
	{
		*(ret + i++) = c;
	}
	return (b);
}












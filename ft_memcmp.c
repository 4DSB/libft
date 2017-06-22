/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 10:13:32 by amittal           #+#    #+#             */
/*   Updated: 2017/06/08 14:58:11 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*src1;
	unsigned char	*src2;
	size_t			i;

	i = -1;
	src1 = (unsigned char *)s1;
	src2 = (unsigned char *)s2;
	while (++i < n && *(src1 + i) == *(src2 + i))
		;
	if (i == n)
		return (0);
	return (*(src1 + i) - *(src2 + i));
}

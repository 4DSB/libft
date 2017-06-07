/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/05 12:32:39 by amittal           #+#    #+#             */
/*   Updated: 2017/06/06 20:59:08 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		LIBFT_H
# define	LIBFT_H

# include	<string.h>
# include	<unistd.h>
# include	<stdlib.h>

void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void 	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);

#endif



















/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/18 08:15:30 by amittal           #+#    #+#             */
/*   Updated: 2017/07/22 00:00:16 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument:	1. The integer to print.
**				2. The file descriptor.
** Operation:	Outputs the integer n to the file descriptor fd.
** Approach:	ABS returns the absolute value of a number. Appending all the
**				digits in reverse order first and in the end reversing them
**				using ft_strrev. Lastly, printing the string using putstr_fd.
** Return:		None.
*/

#include <unistd.h>

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*head;
	char	*str;
	char	num[22];

	str = num;
	head = str;
	if (n < 0)
		*str++ = '-';
	*str++ = ABS(n % 10) + '0';
	n /= 10;
	while (n)
	{
		*str++ = ABS(n % 10) + '0';
		n /= 10;
	}
	*str = '\0';
	ft_strrev(*head == '-' ? head + 1 : head);
	ft_putstr_fd(head, fd);
}

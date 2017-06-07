/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/05 12:19:13 by amittal           #+#    #+#             */
/*   Updated: 2017/06/06 21:54:37 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void ps()
{
	printf("***************\n");
}

void print_bytes(const void *object, size_t size)
{
	const unsigned char * const bytes = object;
	size_t i;

	printf("[ ");
	for(i = 0; i < size; i++)
	{
		printf("%02x ", bytes[i]);
	}
	printf("]\n");
}


int main()
{
	ps();
	char ch1[] = "ft_memtest test";
	printf("%s\n", ch1);
	print_bytes(ch1, 15);
	ft_memset(ch1, '-', 6);
	print_bytes(ch1, 15);
	printf("%s\n", ch1);
	ps();

	ps();
	char test[] = "ft_bzero test";
	printf("%s\n", test);
	print_bytes(test, 13);
	ft_bzero(test, 5);
	print_bytes(test, 13);
	printf("%s\n", test);
	ps();

	ps();
	char test2[14] = "ft_memcpy test";
	char t2[14];
	printf("%s\n", test2);
	print_bytes(test2, 14);
	print_bytes(t2, 14);
	ft_memcpy(t2, test2, 7);
	print_bytes(t2, 14);
	printf("%s\n", t2);
	ps();

	ps();
	printf("ft_memccpy test\n");
	char test3[15] = "ft_memccpy test";
	char t3[15] = "FTMEMCCPY TEST";
	print_bytes(test3, 15);
	print_bytes(t3, 15);
	print_bytes(ft_memccpy(t3, test3, '_', 13), 13);
	print_bytes(test3, 15);
	print_bytes(t3, 15);
	ps();
}




















/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinpache <vinpache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 16:21:04 by vinpache          #+#    #+#             */
/*   Updated: 2025/07/17 16:44:03 by vinpache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)

{
	const unsigned char	*p;

	p = (const unsigned char *)s;
	while (n--)
	{
		if (*p++ == (unsigned char)c)
			return ((void *)(p - 1));
	}
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "abcde";
// 	printf("%s\n", (char *)ft_memchr(str, 'c', 5));
// 	printf("%s\n", (char *)ft_memchr(str, 'x', 5));
// 	return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinpache <vinpache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 16:48:55 by vinpache          #+#    #+#             */
/*   Updated: 2025/07/17 17:07:38 by vinpache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *p1 = s1;
	const unsigned char *p2 = s2;

	while (n--)
	{
		if (*p1++ != *p2++)
			return (*(p1 - 1) - *(p2 - 1));
	}
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_memcmp("abc", "abc", 3));  // 0
// 	printf("%d\n", ft_memcmp("abc", "abd", 3));  // -1
// 	printf("%d\n", ft_memcmp("abd", "abc", 3));  // 1
// 	return (0);
// }
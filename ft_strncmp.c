/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinpache <vinpache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 13:44:50 by vinpache          #+#    #+#             */
/*   Updated: 2025/07/17 16:45:48 by vinpache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (*s1 && *s2 && *s1 == *s2 && n > 1)
	{
		s1++;
		s2++;
		n--;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("Teste 1 (iguais): %d\n", ft_strncmp("hello", "hello", 5));
// 	printf("Teste 2 (diferença no final): %d\n", ft_strncmp("hello", "hella",
// 				5));
// 	printf("Teste 3 (menor): %d\n", ft_strncmp("abc", "ab", 2));
// 	printf("Teste 4 (n == 0): %d\n", ft_strncmp("abc", "xyz", 0));
// 	printf("Teste 5 (string menor que n): %d\n", ft_strncmp("abc", "abcdef",
// 				6));
// 	return (0);
// }
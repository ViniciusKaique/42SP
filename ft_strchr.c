/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinpache <vinpache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 11:14:28 by vinpache          #+#    #+#             */
/*   Updated: 2025/07/17 11:36:11 by vinpache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s || (unsigned char)c == '\0')
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char *p = ft_strchr("abc", 'b');
// 	printf("%s\n", p);

// 	p = ft_strchr("abc", 'z');
// 	printf("%p\n", p);

// 	p = ft_strchr("abc", '\0');
// 	printf("%s\n", p);

// 	return (0);
// }
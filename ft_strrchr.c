/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinpache <vinpache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 11:14:28 by vinpache          #+#    #+#             */
/*   Updated: 2025/07/17 13:40:30 by vinpache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = (int)ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

// #include <stdio.h>

// int main(void)
// {
// 	char *p;

// 	p = ft_strrchr("abcabc", 'b');
// 	printf("%s\n", p);

// 	p = ft_strrchr("abcabc", 'z');
// 	printf("%p\n", p);

// 	p = ft_strrchr("abcabc", '\0');
// 	printf("%s\n", p);
// }
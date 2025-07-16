/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinpache <vinpache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 16:44:44 by vinpache          #+#    #+#             */
/*   Updated: 2025/07/14 14:14:31 by vinpache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n-- > 0)
		*p++ = (unsigned char)c;
	return (s);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     char buffer[20];

//     ft_memset(buffer, 128, 10);
//     buffer[10] = '\0';

//     printf("Buffer após ft_memset: %s\n", buffer);

//     char buffer2[20];
//     memset(buffer2, 128, 5);
//     buffer2[10] = '\0';

//     printf("Buffer após memset: %s\n", buffer2);

//     return (0);
// }
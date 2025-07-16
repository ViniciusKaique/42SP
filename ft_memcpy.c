/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinpache <vinpache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 09:25:00 by vinpache          #+#    #+#             */
/*   Updated: 2025/07/16 09:43:43 by vinpache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*pdest;
	const unsigned char	*psrc;

	pdest = (unsigned char *)dest;
	psrc = (const unsigned char *)src;
	while (n-- > 0)
		*pdest++ = *psrc++;
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
//     char *origem = "Hello, world!";
// 	char	destino[20];

// 	ft_memcpy(destino, origem, strlen(origem) + 1);
// 	printf("Origem: %s\n", origem);
// 	printf("Destino: %s\n", destino);
// 	return (0);
// }

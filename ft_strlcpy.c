/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinpache <vinpache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 15:26:16 by vinpache          #+#    #+#             */
/*   Updated: 2025/07/16 16:03:43 by vinpache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;

	if (!dst || !src)
		return (0);
	len = ft_strlen(src);
	if (size == 0)
		return (len);
	while (*src && size > 1)
	{
		*dst++ = *src++;
		size--;
	}
	*dst = '\0';
	return (len);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	char src[] = "Hello, world!";
// 	char dst[13];

// 	size_t ret = ft_strlcpy(dst, src, sizeof(dst));

// 	printf("Fonte:    \"%s\"\n", src);
// 	printf("Destino:  \"%s\"\n", dst);
// 	printf("Retorno:  %zu\n", ret);

// 	if (ret >= sizeof(dst))
// 		printf("Aviso: Truncamento ocorreu.\n");
// 	else
// 		printf("Toda string foi copiada.\n");
// 	return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinpache <vinpache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 09:14:38 by vinpache          #+#    #+#             */
/*   Updated: 2025/07/14 14:20:47 by vinpache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char buffer[10] = "123456789";
// 	printf("Antes do bzero: %s\n", buffer);
// 	ft_bzero(buffer + 3, 1);
// 	printf("Depois do bzero: %s\n", buffer);
// 	return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinpache <vinpache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 17:15:23 by vinpache          #+#    #+#             */
/*   Updated: 2025/07/16 17:21:54 by vinpache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c -= 32);
	return (c);
}

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     printf("%c\n",ft_toupper('a'));
//     printf("%c",ft_toupper('B'));
//     return (0);
// }

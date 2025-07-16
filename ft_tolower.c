/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinpache <vinpache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 17:15:23 by vinpache          #+#    #+#             */
/*   Updated: 2025/07/16 17:27:07 by vinpache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c += 32);
	return (c);
}

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     printf("%c\n",ft_tolower('a'));
//     printf("%c",ft_tolower('B'));
//     return (0);
// }

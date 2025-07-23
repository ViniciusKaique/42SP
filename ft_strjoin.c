/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinpache <vinpache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 12:59:45 by vinpache          #+#    #+#             */
/*   Updated: 2025/07/22 13:54:47 by vinpache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1len;
	size_t	s2len;
	size_t	sumlen;
	char	*result;

	if (!s1 || !s2)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	sumlen = s1len + s2len;
	result = ft_calloc(sumlen + 1, 1);
	if (!result)
		return (NULL);
	ft_memmove(result, s1, s1len);
	ft_memmove(result + s1len, s2, s2len);
	return (result);
}

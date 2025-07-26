/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinpache <vinpache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 09:42:18 by vinpache          #+#    #+#             */
/*   Updated: 2025/07/24 16:34:21 by vinpache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	ft_fillstr(char *str, long n, int *i)
{
	if (n >= 10)
		ft_fillstr(str, n / 10, i);
	str[(*i)++] = '0' + (n % 10);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	long	nb;

	i = 0;
	nb = n;
	str = ft_calloc(ft_numlen(n) + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (nb < 0)
	{
		str[i++] = '-';
		nb = -nb;
	}
	ft_fillstr(str, nb, &i);
	return (str);
}

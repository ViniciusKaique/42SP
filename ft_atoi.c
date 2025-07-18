/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinpache <vinpache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 10:34:02 by vinpache          #+#    #+#             */
/*   Updated: 2025/07/18 12:43:26 by vinpache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr++ == '-')
			sign = -1;
	}
	while (ft_isdigit(*nptr))
		result = result * 10 + (*nptr++ - '0');
	return (sign * result);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	const char *tests[] = {
// 		"123", "   -123-2", "+123-2", "   456", "\t  -789", "42abc",
// 		"--42", "++42", "-+42", "+-42", "", "    ", "0", "-0", "+0",
// 		"2147483647", "-2147483648", "999999999999999999999", NULL
// 	};

// 	int	i = 0;
// 	while (tests[i])
// 	{
// 		printf("Input: %-22s ft_atoi: %-12d | atoi: %-12d\n",
// 			tests[i],
// 			ft_atoi(tests[i]),
// 			atoi(tests[i]));
// 		i++;
// 	}
// 	return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinpache <vinpache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 15:25:46 by vinpache          #+#    #+#             */
/*   Updated: 2025/07/14 14:21:20 by vinpache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinpache <vinpache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 14:39:48 by vinpache          #+#    #+#             */
/*   Updated: 2025/07/10 12:45:41 by vinpache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}
#include<unistd.h>
void ft_putchar(char c)
{
	write(1,&c,1);
}
int main(int argc, char **argv)
{
	ft_putstr(argv[1]);
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinpache <vinpache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 14:39:48 by vinpache          #+#    #+#             */
/*   Updated: 2025/07/10 12:45:41 by vinpache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}
#include<unistd.h>
void ft_putchar(char c)
{
	write(1,&c,1);
}
int main(int argc, char **argv)
{
	ft_putstr(argv[1]);
	return (0);
}

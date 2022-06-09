/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 03:55:08 by salim             #+#    #+#             */
/*   Updated: 2022/05/31 23:00:42 by salim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(unsigned char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	*a;

	a = (unsigned char *)str;
	i = 0;
	while (a[i] != '\0')
	{
		if (a[i] < 32 || a[i] > 126)
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[a[i] / 16]);
			ft_putchar("0123456789abcdef"[a[i] % 16]);
		}
		else
			write(1, &a[i], 1);
		i++;
	}
	return ;
}

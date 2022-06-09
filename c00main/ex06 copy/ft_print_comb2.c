/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2nd_ft_print_comb2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 17:41:17 by salim             #+#    #+#             */
/*   Updated: 2022/05/24 16:43:46 by salim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnumber(int i, int m)
{
	ft_putchar((i / 10) + '0');
	ft_putchar((i % 10) + '0');
	ft_putchar(' ');
	ft_putchar((m / 10) + '0');
	ft_putchar((m % 10) + '0');
	return ;
}

void	ft_print_comb2(void)
{
	int	i;
	int	m;

	i = 0;
	while (i <= 98)
	{
		m = i + 1;
		while (m <= 99)
		{
			ft_putnumber(i, m);
			if (i != 98 || m != 99)
				write(1, ", ", 2);
			m++;
		}
		i++;
	}
	return ;
}

int main()
{
	ft_print_comb2();
}

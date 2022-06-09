/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 22:57:05 by salim             #+#    #+#             */
/*   Updated: 2022/05/25 20:16:39 by salim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putcomma(int a, int b, int c)
{
	ft_putchar(a + '0');
	ft_putchar(b + '0');
	ft_putchar(c + '0');
	if (a != 7 || b != 8 || c != 9)
		write(1, ", ", 2);
	return ;
}

void	ft_print_comb(void)
{
	int	i;
	int	m;
	int	n;

	i = 0;
	while (i <= 7)
	{
		m = i + 1;
		while (m <= 8)
		{
			n = m + 1;
			while (n <= 9)
			{
				ft_putcomma(i, m, n);
				n++;
			}
			m++;
		}
		i++;
	}
	return ;
}

int main()
{
	ft_print_comb();
}

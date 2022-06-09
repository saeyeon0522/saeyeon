/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 17:55:34 by salim             #+#    #+#             */
/*   Updated: 2022/06/07 23:14:13 by salim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

long long	ft_strlen(char *str)
{
	long long	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int	ft_error(char *base)
{
	long long	i;
	long long	j;

	i = 0;
	j = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_recursive(long long num1, long long num2, char *base)
{
	if (num1 >= num2)
		ft_recursive(num1 / num2, num2, base);
	write(1, &base[num1 % num2], 1);
	return ;
}

void	ft_putnbr_base(int nbr, char *base)
{
	long long	b_len;
	long long	l_nbr;

	l_nbr = (long long) nbr;
	b_len = ft_strlen(base);
	if (b_len <= 1)
		return ;
	if (ft_error(base) == 0)
		return ;
	if (l_nbr < 0)
	{
		write(1, "-", 1);
		l_nbr = l_nbr * -1;
	}
	ft_recursive(l_nbr, b_len, base);
	return ;
}

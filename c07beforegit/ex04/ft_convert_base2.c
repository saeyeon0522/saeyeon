/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyun <cyun@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 12:54:03 by cyun              #+#    #+#             */
/*   Updated: 2022/06/09 16:30:25 by salim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

int	find_size(int nb, int base_size)
{
	int	nb_size;

	nb_size = 0;
	if (nb < 0)
		nb_size++;
	while (nb > base_size)
	{
		nb_size++;
		nb /= base_size;
	}
	return (nb_size + 1);
}

char	*ft_itoa_base(long nb, char *base, int base_size)
{
	int		idx;
	int		div;
	char	*nbr_base;

	nbr_base = (char *)malloc(find_size(nb, base_size) * sizeof(char));
	if (!nbr_base)
		return (0);
	idx = 0;
	if (nb < 0)
	{
		nbr_base[idx++] = '-';
		nb = -nb;
	}
	div = 1;
	while (nb / div >= base_size)
		div *= base_size;
	while (div)
	{
		nbr_base[idx] = base[nb / div];
		idx++;
		nb %= div;
		div /= base_size;
	}
	nbr_base[idx] = '\0';
	return (nbr_base);
}

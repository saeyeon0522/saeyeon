/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 20:53:49 by salim             #+#    #+#             */
/*   Updated: 2022/06/09 19:10:33 by salim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_ascending_sorted(int *tab, int len, int (*f) (int, int))
{
	int	i;

	i = 0;
	while (i < len - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_descending_sorted(int	*tab, int len, int (*f) (int, int))
{
	int	i;

	i = 0;
	while (i < len - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_sort(int *tab, int length, int (*f) (int, int))
{
	if (ft_is_ascending_sorted(tab, length, f)
		|| ft_is_descending_sorted(tab, length, f))
		return (1);
	else
		return (0);
}

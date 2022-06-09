/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 18:51:41 by salim             #+#    #+#             */
/*   Updated: 2022/05/24 22:19:46 by salim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	size--;
	while (i < size)
	{
		temp = tab[i];
		tab[i] = tab[size];
		tab[size] = temp;
		size--;
		i++;
	}
}

int main()
{
	int tab[5] = {1, 2, 3, 4, 5};
	int size = 5;
	int i = 0;
	printf("before");
	while(i < 5)
	{
		printf("%d", tab[i]);
		i++;
	}
	i = 0;
	ft_rev_int_tab(tab, size);
	printf("\nafter");
	while(i < 5)
	{
		printf("%d", tab[i]);
		i++;
	}
}

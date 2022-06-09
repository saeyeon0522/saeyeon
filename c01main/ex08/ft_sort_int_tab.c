/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 20:18:09 by salim             #+#    #+#             */
/*   Updated: 2022/06/01 14:58:32 by salim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int j;
	int	temp;
	
		i = 0;	
		while (i < size)
		{
			j = 0;
			while (j < size - 1 )
			{	
				if (tab[j] > tab[j + 1])
				{
					temp = tab[j];
					tab[j] = tab[j + 1];
					tab[j + 1] = temp;
					
				}
				j++;
			}
			i++;
		}

}


int main()
{
	int tab1[5] = {4, 5, 1, 3, 2};
	int i = 0;
	int size;
	printf("before");
	while(i < 5)
	{
		printf("%d", tab1[i]);
		i++;
	}
	i = 0;
	ft_sort_int_tab(tab1, 5);
	printf("\nafter");
	while(i < 5)
	{
		printf("%d", tab1[i]);
		i++;
	}
}


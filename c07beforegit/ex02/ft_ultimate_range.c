/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 18:21:29 by salim             #+#    #+#             */
/*   Updated: 2022/06/04 18:38:28 by salim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ulti_range_index(int **range, int min, int max)
{
	int	*arr;
	int	i;
	int	return_range;

	if (min >= max)
		return (0);
	return_range = max - min;
	arr = (int *) malloc(return_range * sizeof(int));
	if (arr == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = arr;
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (return_range);
}

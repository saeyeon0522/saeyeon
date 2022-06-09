/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 20:33:14 by salim             #+#    #+#             */
/*   Updated: 2022/06/09 19:40:25 by salim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f) (char*))
{
	int	i;
	int	count;

	length = length + 0;
	i = 0;
	count = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			if (f(tab[i][j]) != 0)
				count++;
			j++;
		}
		i++;
	}
	return (count);
}

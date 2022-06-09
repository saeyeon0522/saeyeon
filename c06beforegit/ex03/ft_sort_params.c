/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 18:38:48 by salim             #+#    #+#             */
/*   Updated: 2022/06/09 14:36:13 by salim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return ;
}

void	ft_swap(char **str1, char **str2)
{
	char	*temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	ft_str_sort(char **arr, int size)
{
	int	i;
	int	j;

	i = 1;
	while (i <= size)
	{
		j = 1;
		while (j < size - 1)
		{
			if (ft_strcmp(arr[j], arr[j + 1]) > 0)
				ft_swap(&arr[j], &arr[j + 1]);
			j++;
		}
		i++;
	}
}	

int	main(int argc, char *argv[])
{
	int	index;

	if (argc > 2)
		ft_str_sort(argv, argc);
	index = 1;
	while (index < argc)
	{
		ft_putstr(argv[index]);
		index++;
	}
}

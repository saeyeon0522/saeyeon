/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 14:18:38 by salim             #+#    #+#             */
/*   Updated: 2022/06/05 18:26:27 by salim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	index;
	int	i;

	index = argc - 1;
	while (index > 0)
	{
		i = 0;
		while (argv[index][i] != '\0')
		{
			write(1, &argv[index][i], 1);
			i++;
		}
		write(1, "\n", 1);
		index--;
	}
}

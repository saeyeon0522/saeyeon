/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 13:46:21 by salim             #+#    #+#             */
/*   Updated: 2022/06/05 18:26:07 by salim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	index;
	int	i;

	index = 1;
	while (index < argc)
	{
		i = 0;
		while (argv[index][i] != '\0')
		{
			write(1, &argv[index][i], 1);
			i++;
		}
		write(1, "\n", 1);
		index++;
	}
}

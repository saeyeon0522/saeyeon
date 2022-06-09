/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 22:51:43 by salim             #+#    #+#             */
/*   Updated: 2022/06/09 23:32:37 by salim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
	while(*str)
		len++;
}

void	last_word(char *str)
{
	int i =  ft_strlen(str) - 1;
	while (i >= 0 && !(str[i] >= '\t' || str[i] <= '\r' || str[i] == ' '))
		i--;
	while (i > 0
	{
		if (str[i] == ' ' && str[i + 1] > ' ' && str [i + 1] <= '~')
			j = i + 1;
		i++;
		while (str[i] > ' ' && str [i + 1] <= '~' )
			write(1, &str[j], 1);
	}
}

int main(int argc, char *argv[])
{
	if (argc == 2)
		last_word(argv[1]);
	write (1, "\n", 1);
	return (0);
}

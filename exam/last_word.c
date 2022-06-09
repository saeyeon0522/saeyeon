/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 22:04:29 by salim             #+#    #+#             */
/*   Updated: 2022/06/09 22:51:36 by salim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int main(int argc, char *argv[])
{
	int	len;
	int	i;

	i = 0;
	while (argv[1])
		len++;
	if (argc == 2)
	{
		if (argv[1] && (argv[1][len] == ' ' || argv[1][len] == '\t'))
			len--;
		while (argv[1] && (argv[1][len] != ' ' || argv[1][len] != '\t'))
			len--;
		while (argv[1] && (argv[1][len] != ' ' || argv[1][len] != '\t'))
		{
			write(1, &argv[1][len], 1);
			len++;
		}
	}
	write(1, "\n", 1);
}

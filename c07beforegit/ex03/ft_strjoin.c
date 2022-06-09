/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 18:38:44 by salim             #+#    #+#             */
/*   Updated: 2022/06/07 15:43:15 by salim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int	ft_wordcount(char **strs, int size)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (size > i)
	{
		count += ft_strlen(strs[i]);
		i++;
	}
	return (count);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*joined_str;
	int		i;
	int		j;
	int		k;

	k = 0;
	joined_str = (char *) malloc((ft_wordcount(strs, size) + (size - 1)
				* ft_strlen(sep) + 1) * sizeof(char));
	if (joined_str == NULL)
		return (NULL);
	i = -1;
	while (++i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			joined_str[k++] = strs[i][j++];
			if (i != size - 1)
			{
				while (sep[j] != '\0')
					joined_str[k++] = sep[j++];
			}
		}
	}
	joined_str[k] = '\0';
	return (joined_str);
}

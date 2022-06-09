/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 17:43:05 by salim             #+#    #+#             */
/*   Updated: 2022/06/08 20:18:18 by salim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	word_cmp(char str, char *charset)
{
	int	i;

	i = 0;
	while (*charset)
	{
		if (str == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	word_len(char *str, char *charset)
{
	int	len;

	len = 0;
	while (*str)
	{
		if (*str && word_cmp(*str, charset))
			return (len);
		len++;
		str++;
	}
	return (len);
}

int	word_count(char *str, char *charset)
{
	int	count;
	int	len;

	count = 0;
	len = 0;
	while (*str)
	{	
		while (*str && word_cmp(*str, charset))
			str++;
		if (!(*str))
			break ;
		len = word_len(str, charset);
		str += len;
		count++;
	}
	return (count);
}

void	ft_strncpy(char **strs, char *str, int len, int index)
{
	int	i;

	i = 0;
	while (i < len)
	{
		strs[index][i] = *str;
		i++;
		str++;
	}
	strs[index][i] = 0;
}

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	int		count;
	int		len;
	int		index;

	index = 0;
	count = word_count(str, charset);
	strs = (char **)malloc(sizeof(char *) * (count + 1));
	if (!(strs))
		return (0);
	strs[count] = 0;
	while (*str)
	{
		while (*str && word_cmp(*str, charset))
			str++;
		if (!(*str))
			break ;
		len = word_len(str, charset);
		strs[index] = (char *)malloc(sizeof(char) * (len + 1));
		if (!(strs[index]))
			return (0);
		ft_strncpy(strs, str, len, index++);
		str += len;
	}
	return (strs);
}

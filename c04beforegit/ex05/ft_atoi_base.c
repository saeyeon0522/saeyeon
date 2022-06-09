/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi22.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 16:59:11 by salim             #+#    #+#             */
/*   Updated: 2022/06/06 22:02:38 by salim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check(char *base)
{
	int		i;
	int		j;
	char	*buffer;

	i = 0;
	buffer = base;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+'
			|| (base[i] >= '\t' && base[i] <= '\r') || base[i] == ' ')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (buffer[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	str_cmp_base(char *base, char c)
{
	int	index;

	index = 0;
	while (base[index])
	{
		if (base[index] == c)
			return (index);
		index++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	b_len;
	int	num;
	int	flag;

	flag = 1;
	num = 0;
	b_len = ft_check(base);
	if (b_len < 2)
		return (0);
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			flag = flag * -1;
		str++;
	}
	while (str_cmp_base(base, *str) != (-1) && *str)
	{
		num = (num * b_len) + (str_cmp_base(base, *str));
		str++;
	}
	return (num * flag);
}

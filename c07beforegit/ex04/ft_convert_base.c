/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyun <cyun@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 12:53:55 by cyun              #+#    #+#             */
/*   Updated: 2022/06/09 16:36:29 by salim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_itoa_base(long nb, char *base, int base_size);
int		find_size(int nb, int base_size);

int	atoi_is_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	else if (c == '\v' || c == '\r' || c == '\f')
		return (1);
	return (0);
}

int	atoi_check_base(char *base)
{
	int	i;
	int	j;

	i = -1;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[++i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
	}
	i = -1;
	while (base[++i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		else if (atoi_is_space(base[i]))
			return (0);
	}
	return (j);
}

int	find_idx(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	base_size;
	int	i;
	int	sign;
	int	num;

	i = 0;
	num = 0;
	sign = 1;
	base_size = atoi_check_base(base);
	if (!base_size)
		return (0);
	while (atoi_is_space(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && find_idx(str[i], base) != -1)
	{
		num = num * base_size + find_idx(str[i], base) * sign;
		i++;
	}
	return (num);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	number;

	if (!atoi_check_base(base_from) || !atoi_check_base(base_to))
		return (0);
	else
		number = ft_atoi_base(nbr, base_from);
	return (ft_itoa_base((long)number, base_to, atoi_check_base(base_to)));
}

int main()
{
	printf("%s", ft_convert_base("0", "0123456789", "0123456789abcdef"));
}

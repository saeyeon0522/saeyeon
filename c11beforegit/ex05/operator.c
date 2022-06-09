/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:36:05 by salim             #+#    #+#             */
/*   Updated: 2022/06/09 15:37:30 by salim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int	add(int x, int y)
{
	return (x + y);
}

int	sub(int x, int y)
{
	return (x - y);
}

int	mul(int x, int y)
{
	return (x * y);
}

int	div(int x, int y)
{
	return (x / y);
}

int	mod(int x, int y)
{
	return (x % y);
}

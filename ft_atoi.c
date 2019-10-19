/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakholmi <sakholmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 16:35:37 by sakholmi          #+#    #+#             */
/*   Updated: 2019/10/03 20:07:58 by sakholmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *str)
{
	int value;
	int sign;

	value = 0;
	sign = 1;
	while ((*str >= 8 && *str <= 13) || *str == ' ')
		str++;
	if (*str == '+' || *str == '-')
	{
		sign = (*str == '-') ? -1 : 1;
		str++;
	}
	while (*str && ft_isdigit(*str))
	{
		value = 10 * value + *str - '0';
		str++;
	}
	return (value * sign);
}

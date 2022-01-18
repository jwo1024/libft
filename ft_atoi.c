/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwolee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 19:57:54 by marvin            #+#    #+#             */
/*   Updated: 2022/01/17 15:34:00 by jiwolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_atoi(char *str)
{
	int			idx;
	int			i;
	long long	result;
	long long	mul;

	result = 0;
	i = 1;
	while (*str == ' ' || *str == '\n' || *str == '\t'
		|| *str == '\v' || *str == '\f' || *str == '\r')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str++ == '-')
			i *= -1;
	}
	mul = 1;
	idx = 0;
	while ('0' <= str[idx] && str[idx] <= '9')
		idx++;
	while (0 < idx--)
	{
		result += (str[idx] - '0') * mul;
		mul *= 10;
	}
	if (result > 9223372036854775807)
	{	
		if (i < 0)
			return (-1);
		else if (i > 0)
			return (1);
	}
	return ((int)result * i);
}


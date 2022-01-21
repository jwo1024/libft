/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwolee <jiwolee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 19:57:54 by marvin            #+#    #+#             */
/*   Updated: 2022/01/21 13:57:26 by jiwolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

static int	rtn_ll(unsigned long long result, int i);

int	ft_atoi(const char *str)
{
	int					idx;
	int					i;
	unsigned long long	result;
	unsigned long long	mul;

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
	return (rtn_ll(result, i));
}

static int	rtn_ll(unsigned long long result, int i)
{
	unsigned long long	llmax;
	unsigned long long	llmin;

	llmax = 9223372036854775807;
	llmin = 9223372036854775808ULL;
	if (result > llmax && i > 0)
		return (-1);
	else if (result > llmin && i < 0)
		return (0);
	else
		return ((int)result * i);
}

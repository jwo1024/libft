/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwolee <jiwolee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 00:23:53 by jiwolee           #+#    #+#             */
/*   Updated: 2022/01/19 00:26:29 by jiwolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c))
		return (ft_isalpha(c));
	else if (ft_isdigit(c))
		return (ft_isdigit(c));
	return (0);
}

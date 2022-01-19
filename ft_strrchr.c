/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwolee <jiwolee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 21:59:43 by jiwolee           #+#    #+#             */
/*   Updated: 2022/01/19 21:59:43 by jiwolee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		l;
	char	a;

	a = c;
	l = ft_strlen(s);
	while (l >= 0)
	{
		if (s[l] == a)
			return ((char *)&s[l]);
		l--;
	}
	return (NULL);
}

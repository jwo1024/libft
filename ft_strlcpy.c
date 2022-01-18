/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwolee <jiwolee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 00:45:56 by jiwolee           #+#    #+#             */
/*   Updated: 2021/09/26 20:53:22 by jiwolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	idx;
	size_t	len;

	len = 0;
	while (src[len] != '\0')
		len++;
	if (dstsize < 1)
		return (len);
	idx = 0;
	while (src[idx] != '\0' && idx + 1 < dstsize)
	{
		dst[idx] = (char)src[idx];
		idx++;
	}
	dst[idx] = '\0';
	return (len);
}

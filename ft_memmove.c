/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwolee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 14:33:36 by jiwolee           #+#    #+#             */
/*   Updated: 2022/01/16 14:33:39 by jiwolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dststr;
	unsigned char	*srcstr;
	size_t			i;

	if (len == 0 || dst == src)
		return (dst);
	dststr = (unsigned char *)dst;
	srcstr = (unsigned char *)src;
	i = 0;
	while (i < len)
	{
		if (dst < src)
			dststr[i] = srcstr[i];
		else
			dststr[len - i - 1] = srcstr[len - i - 1];
		i++;
	}
	return (dst);
}

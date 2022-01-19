/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwolee <jiwolee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 00:45:56 by jiwolee           #+#    #+#             */
/*   Updated: 2022/01/19 21:59:19 by jiwolee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */


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

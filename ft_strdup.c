/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwolee <jiwolee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 17:12:54 by marvin            #+#    #+#             */
/*   Updated: 2022/01/19 21:59:13 by jiwolee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*new;

	len = 0;
	while (src[len] != 0)
		len++;
	new = (char *)malloc(sizeof(char) * (len + 1));
	if (new == 0)
		return (0);
	i = 0;
	while (src[i] != 0)
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

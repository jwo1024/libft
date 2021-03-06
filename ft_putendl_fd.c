/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwolee <jiwolee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 21:59:02 by jiwolee           #+#    #+#             */
/*   Updated: 2022/01/19 21:59:02 by jiwolee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (fd >= 0 && s)
	{
		ft_putstr_fd(s, fd);
		write(fd, "\n", 1);
	}
}

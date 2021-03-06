/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchene <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 21:31:07 by jchene            #+#    #+#             */
/*   Updated: 2019/11/15 17:29:34 by jchene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *str, int fd)
{
	int		i;

	i = -1;
	if (!str)
		return ;
	while (str[++i])
		ft_putchar_fd(str[i], fd);
	ft_putchar_fd('\n', fd);
}

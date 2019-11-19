/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchene <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 13:50:03 by jchene            #+#    #+#             */
/*   Updated: 2019/11/18 21:36:51 by jchene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*last;

	if (!*alst)
	{
		ft_lstadd_front(alst, new);
		return ;
	}
	last = ft_lstlast(*alst);
	last->next = new;
	new->next = NULL;
}
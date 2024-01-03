/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 23:24:07 by pvilchez          #+#    #+#             */
/*   Updated: 2023/11/11 18:51:49 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_node **lst, t_node *new)
{
	t_node	*last;

	last = *lst;
	if (last == NULL)
	{
		ft_lstadd_front(lst, new);
	}
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}

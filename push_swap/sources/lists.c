/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 20:17:45 by estoffel          #+#    #+#             */
/*   Updated: 2021/12/19 23:48:31 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*newnode(int nbr)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->next = NULL;
	new_node->nbr = nbr;
	return (new_node);
}

void	delnode(t_list *node)
{
	if (node)
		free(node);
}

void	lstclear(t_list *node)
{
	t_list	*tmp;

	if (node)
	{
		while (node)
		{
			tmp = node->next;
			delnode(node);
			node = tmp;
		}
	}
}

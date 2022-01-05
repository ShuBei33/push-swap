/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 23:24:55 by estoffel          #+#    #+#             */
/*   Updated: 2021/12/24 10:46:05 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	nb_compare(t_list *cpy_a, t_list *stack_a)
{
	t_list	*clone_stack_a;
	t_list	*clone_cpy;
	int		index;

	index = 0;
	clone_stack_a = stack_a;
	clone_cpy = cpy_a;
	while (clone_stack_a)
	{
		if (clone_stack_a->nbr < clone_cpy->nbr)
			index++;
		clone_stack_a = clone_stack_a->next;
	}
	return (index);
}

void	get_index(t_list *stack_a)
{
	t_list	*cpy_a;

	cpy_a = stack_a;
	while (cpy_a)
	{
		cpy_a->index = nb_compare(cpy_a, stack_a);
		cpy_a = cpy_a->next;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 18:41:08 by estoffel          #+#    #+#             */
/*   Updated: 2021/12/24 10:16:38 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate_a(t_list **stack_a)
{
	t_list	*tmp;
	t_list	*last;

	if (!stack_a || !*stack_a)
		return ;
	tmp = (*stack_a)->next;
	last = ft_lstlast(*stack_a);
	last->next = *stack_a;
	(*stack_a)->next = NULL;
	*stack_a = tmp;
	ft_putstr_fd("ra\n", 1);
}

void	rotate_b(t_list **stack_b)
{
	t_list	*tmp;
	t_list	*last;

	if (!stack_b || !*stack_b)
		return ;
	tmp = (*stack_b)->next;
	last = ft_lstlast(*stack_b);
	last->next = *stack_b;
	(*stack_b)->next = NULL;
	*stack_b = tmp;
	ft_putstr_fd("rb\n", 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 14:30:37 by estoffel          #+#    #+#             */
/*   Updated: 2021/12/24 11:08:56 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_a(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	if (!stack_b || !*stack_b)
		return ;
	tmp = (*stack_b)->next;
	ft_lstadd_front(stack_a, *stack_b);
	*stack_b = tmp;
	ft_putstr_fd("pa\n", 1);
}

void	push_b(t_list **stack_b, t_list **stack_a)
{
	t_list	*tmp;

	if (!stack_a || !*stack_a)
		return ;
	tmp = (*stack_a)->next;
	ft_lstadd_front(stack_b, *stack_a);
	*stack_a = tmp;
	ft_putstr_fd("pb\n", 1);
}

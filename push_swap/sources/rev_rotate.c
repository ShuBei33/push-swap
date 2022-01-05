/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 20:49:42 by estoffel          #+#    #+#             */
/*   Updated: 2021/12/24 10:17:37 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*get_last_prev(t_list *stack_a)
{
	int	size;
	int	i;

	i = 1;
	size = (ft_lstsize(stack_a) - 1);
	while (i < size)
	{
		stack_a = stack_a->next;
		++i;
	}
	return (stack_a);
}

void	rev_rotate_a(t_list **stack_a)
{
	t_list	*tmp;
	t_list	*first;
	t_list	*last_prev;

	if (!stack_a || !*stack_a)
		return ;
	last_prev = get_last_prev(*stack_a);
	first = ft_lstlast(*stack_a);
	tmp = *stack_a;
	ft_lstadd_front(stack_a, first);
	*stack_a = first;
	first->next = tmp;
	last_prev->next = NULL;
	ft_putstr_fd("rra\n", 1);
}

void	rev_rotate_b(t_list **stack_b)
{
	t_list	*tmp;
	t_list	*first;
	t_list	*last_prev;

	if (!stack_b || !*stack_b)
		return ;
	last_prev = get_last_prev(*stack_b);
	first = ft_lstlast(*stack_b);
	tmp = *stack_b;
	ft_lstadd_front(stack_b, first);
	*stack_b = first;
	first->next = tmp;
	last_prev->next = NULL;
	ft_putstr_fd("rrb\n", 1);
}

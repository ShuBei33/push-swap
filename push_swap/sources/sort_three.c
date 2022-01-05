/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 01:29:43 by estoffel          #+#    #+#             */
/*   Updated: 2021/12/24 10:06:57 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	sort_three_norm(t_list **stack_a)
{
	t_list	*t;

	t = *stack_a;
	if (t->nbr > t->next->nbr && t->nbr < t->next->next->nbr
		&& t->next->nbr < t->next->next->nbr)
		swap_a(*stack_a);
	else if (t->nbr < t->next->nbr && t->nbr > t->next->next->nbr
		&& t->next->nbr > t->next->next->nbr)
		rev_rotate_a(stack_a);
	else if (t->nbr > t->next->nbr && t->next->nbr < t->next->next->nbr
		&& t->next->nbr < t->next->next->nbr)
		rotate_a(stack_a);
	else if (t->nbr > t->next->nbr && t->next->nbr > t->next->next->nbr
		&& t->next->nbr > t->next->next->nbr)
	{
		swap_a(*stack_a);
		rev_rotate_a(stack_a);
	}
}

void	sort_three(t_list **stack_a)
{
	t_list	*t;

	if (ft_lstsize(*stack_a) == 2)
		swap_a(*stack_a);
	if (ft_lstsize(*stack_a) == 3)
	{
		t = *stack_a;
		if (t->nbr < t->next->nbr && t->nbr < t->next->next->nbr
			&& t->next->nbr > t->next->next->nbr)
		{
			rev_rotate_a(stack_a);
			swap_a(*stack_a);
		}
		sort_three_norm(stack_a);
		return ;
	}
}

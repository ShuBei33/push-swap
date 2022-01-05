/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 03:55:44 by estoffel          #+#    #+#             */
/*   Updated: 2021/12/24 10:46:42 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_five(t_list **stack_a, t_list **stack_b)
{
	int	i;

	i = 0;
	get_index(*stack_a);
	while (i <= ft_lstsize(*stack_a))
	{
		if ((*stack_a)->index == 0 || (*stack_a)->index == 1)
			push_b(stack_b, stack_a);
		else
			rotate_a(stack_a);
		++i;
	}
	if ((*stack_b)->index == 0)
		swap_b(*stack_b);
	sort_three(stack_a);
	push_a(stack_a, stack_b);
	push_a(stack_a, stack_b);
}

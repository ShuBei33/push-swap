/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 06:31:14 by estoffel          #+#    #+#             */
/*   Updated: 2021/12/24 11:09:06 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	bit_shifting(int lstsize)
{
	int	max_bit;
	int	max_index;

	max_bit = 0;
	max_index = (lstsize - 1);
	while (max_index >> max_bit)
		++max_bit;
	return (max_bit);
}

void	sort_big(t_list **stack_a, t_list **stack_b, int i, int j)
{
	int		max_bit;
	int		indx;
	int		lstsize;

	get_index(*stack_a);
	lstsize = ft_lstsize(*stack_a);
	max_bit = bit_shifting(lstsize);
	while (i < max_bit)
	{
		j = 0;
		while (j < (lstsize))
		{
			indx = (*stack_a)->index;
			if (((indx >> i) & 1) == 1)
				rotate_a(stack_a);
			else
				push_b(stack_b, stack_a);
			++j;
		}
		while (*stack_b)
			push_a(stack_a, stack_b);
		++i;
	}
}

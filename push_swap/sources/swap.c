/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 17:25:14 by estoffel          #+#    #+#             */
/*   Updated: 2021/12/22 02:47:25 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_a(t_list *stack_a)
{
	int	tmp;

	if (!stack_a || !stack_a->next)
		return ;
	tmp = stack_a->nbr;
	stack_a->nbr = stack_a->next->nbr;
	stack_a->next->nbr = tmp;
	ft_putstr_fd("sa\n", 1);
}

void	swap_b(t_list *stack_b)
{
	int	tmp;

	if (!stack_b || !stack_b->next)
		return ;
	tmp = stack_b->nbr;
	stack_b->nbr = stack_b->next->nbr;
	stack_b->next->nbr = tmp;
	ft_putstr_fd("sb\n", 1);
}

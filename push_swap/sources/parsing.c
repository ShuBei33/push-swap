/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 21:07:36 by estoffel          #+#    #+#             */
/*   Updated: 2021/12/22 17:10:29 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	init_stack(int nb_arg, char **av, t_list **stack_a)
{
	int		i;
	int		nbr;
	t_list	*new;

	i = 1;
	while (i < nb_arg)
	{	
		nbr = ft_atoi(av[i]);
		new = newnode(nbr);
		ft_lstadd_back(stack_a, new);
		++i;
	}
}

int	parsing(int ac, char **av, t_list **stack_a)
{
	if (!len_error_etc(ac, av))
		return (FAIL);
	init_stack(ac, av, stack_a);
	if (!duplicate_error(*stack_a))
		return (FAIL);
	if (!check_a_sorted(*stack_a))
	{
		lstclear(*stack_a);
		exit(EXIT_SUCCESS);
	}
	return (OK);
}

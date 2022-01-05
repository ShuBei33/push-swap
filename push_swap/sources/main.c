/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 21:53:53 by estoffel          #+#    #+#             */
/*   Updated: 2021/12/24 11:11:11 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (ac < 2)
		return (0);
	if (!parsing(ac, av, &stack_a))
	{
		lstclear(stack_a);
		ft_putstr_fd("Error\n", 2);
		exit(EXIT_FAILURE);
	}
	else if (ac <= 4)
		sort_three(&stack_a);
	else if (ac <= 6)
		sort_five(&stack_a, &stack_b);
	else
		sort_big(&stack_a, &stack_b, 0, 0);
	lstclear(stack_a);
	return (0);
}

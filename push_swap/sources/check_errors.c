/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 18:53:00 by estoffel          #+#    #+#             */
/*   Updated: 2021/12/24 03:22:26 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	len_error_etc(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		if (ft_strlen(av[i]) > 11 || !type_error(av[i])
			|| !int_size_error(av[i]) || ft_strlen(av[i]) == 0)
			return (FAIL);
		++i;
	}
	return (OK);
}

int	type_error(char *av)
{
	int	i;

	i = 0;
	if (av[0] == '-')
		++i;
	while (av[i])
	{
		if (av[i] < '0' || av[i] > '9')
			return (FAIL);
		++i;
	}
	return (OK);
}

int	int_size_error(char *av)
{
	long	nbr;

	nbr = ft_atol(av);
	if (nbr < INT_MIN || nbr > INT_MAX)
		return (FAIL);
	return (OK);
}

int	duplicate_error(t_list *stack_a)
{
	t_list	*clone_a;

	if (!stack_a)
		return (FAIL);
	clone_a = stack_a->next;
	while (stack_a->next)
	{
		while (clone_a)
		{
			if (stack_a->nbr == clone_a->nbr)
				return (FAIL);
			clone_a = clone_a->next;
		}
		stack_a = stack_a->next;
		clone_a = stack_a->next;
	}
	return (OK);
}

int	check_a_sorted(t_list *stack_a)
{
	if (!stack_a)
		return (FAIL);
	while (stack_a->next)
	{
		if (stack_a->nbr > stack_a->next->nbr)
			return (OK);
		stack_a = stack_a->next;
	}
	return (FAIL);
}

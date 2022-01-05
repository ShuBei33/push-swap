/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 20:18:30 by estoffel          #+#    #+#             */
/*   Updated: 2021/12/24 06:30:07 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static size_t	ft_ilen(long int nb)
{
	size_t	i;

	if (nb < 0)
	{
		i = 2;
		nb *= -1;
	}
	else
		i = 1;
	while (nb / 10)
	{
		nb /= 10;
		++i;
	}
	return (i);
}

static void	print_case(t_list *stack)
{
	size_t	i;

	i = 0;
	if (stack)
	{
		while (i < (11 - ft_ilen(stack->nbr)))
		{
			ft_putchar_fd(' ', 1);
			++i;
		}
		ft_putnbr_fd(stack->nbr, 1);
	}
	else
		ft_putstr_fd("           ", 1);
}

static void	print_line(t_list *a, t_list *b)
{
	ft_putstr_fd("| ", 1);
	print_case(a);
	ft_putstr_fd(" || ", 1);
	print_case(b);
	ft_putstr_fd(" |\n", 1);
}

void	print_stack(t_list *a, t_list *b)
{
	t_list	*a1;
	t_list	*b1;

	a1 = a;
	b1 = b;
	ft_putstr_fd("\n|             ||             |\n", 1);
	while (a || b)
	{
		print_line(a, b);
		if (a)
			a = a->next;
		if (b)
			b = b->next;
	}
	ft_putstr_fd("|=============||=============|\n", 1);
	ft_putstr_fd("|      A      ||      B      |\n", 1);
	ft_putstr_fd("|-------------||-------------|\n\n", 1);
}

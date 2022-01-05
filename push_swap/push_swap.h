/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 21:44:13 by estoffel          #+#    #+#             */
/*   Updated: 2022/01/03 19:30:48 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define OK 1
# define FAIL 0

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <limits.h>
# include <stdio.h>
# include "./libft/libft.h"

/*********************************/
/*       A L G O R I T H M       */
/*********************************/

int		bit_shifting(int lstsize);
int		nb_compare(t_list *cpy_a, t_list *stack_a);

void	sort_big(t_list **stack_a, t_list **stack_b, int i, int j);
void	sort_five(t_list **stack_a, t_list **stack_b);
void	get_index(t_list *stack_a);
void	sort_three(t_list **stack_a);

/*********************************/
/*          E R R O R S          */
/*********************************/

int		check_a_sorted(t_list *stack_a);
int		duplicate_error(t_list *stack_a);
int		end_error(char *av);
int		int_size_error(char *av);
int		len_error_etc(int ac, char **av);
int		type_error(char *av);
int		parsing(int ac, char **av, t_list **stack_a);

/*********************************/
/*           M O V E S           */
/*********************************/

void	push_a(t_list **stack_a, t_list **stack_b);
void	push_b(t_list **stack_b, t_list **stack_a);
void	rev_rotate_a(t_list **stack_a);
void	rev_rotate_b(t_list **stack_b);
void	rotate_a(t_list **stack_a);
void	rotate_b(t_list **stack_b);
void	swap_a(t_list *stack_a);
void	swap_b(t_list *stack_b);

/*********************************/
/*           U T I L S           */
/*********************************/

t_list	*get_last_prev(t_list *stack_a);
t_list	*newnode(int nbr);

void	delnode(t_list *node);
void	init_stack(int ac, char **av, t_list **stack_a);
void	lstclear(t_list *node);
void	print_stack(t_list *a, t_list *b);

#endif

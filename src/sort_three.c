/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 15:43:56 by cpapot            #+#    #+#             */
/*   Updated: 2022/12/13 13:38:59 by cpapot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	sort_three_nbr(t_int_list **list)
{
	t_int_list	*list_a;

	list_a = *list;
	if (list_a->cont > list_a->next->cont && \
		list_a->next->cont > list_a->next->next->cont)
		sa(&list_a);
	if (list_a->cont > list_a->next->cont)
		sa(&list_a);
	else if (list_a->cont > list_a->next->next->cont)
		rra(&list_a);
	else if (list_a->next->cont > list_a->next->next->cont)
	{
		sa(&list_a);
		ra(&list_a);
	}
	if (list_a->next->cont > list_a->next->next->cont)
	{
		ra(&list_a);
		sa(&list_a);
		rra(&list_a);
	}
}

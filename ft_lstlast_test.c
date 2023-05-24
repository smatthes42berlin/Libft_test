/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <smatthes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 08:51:21 by smatthes          #+#    #+#             */
/*   Updated: 2023/05/24 16:26:00 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_test.h"

int	main(void)
{
	t_list	*lst_ptr;
	t_list	*new_node1;
	t_list	*new_node2;
	t_list	*new_node3;
	t_list	*last;
	int		memcmp_res;

	// char	*test;
	// int		cmp_content;
	// int		cmp_next;
	// test case empty list
	lst_ptr = NULL;
	last = ft_lstlast(lst_ptr);
	memcmp_res = (last == NULL) ? 0 : 1;
	if (memcmp_res == 1)
	{
		printf("last node not returned correctly");
	}
	compare_int_res_one_str_fail_only(0, memcmp_res, "empty list");
	// test case one elem
	lst_ptr = NULL;
	new_node1 = ft_lstnew("1");
	ft_lstadd_front(&lst_ptr, new_node1);
	last = ft_lstlast(lst_ptr);
	memcmp_res = (last == new_node1) ? 0 : 1;
	if (memcmp_res == 1)
	{
		printf("last node not returned correctly");
	}
	compare_int_res_one_str_fail_only(0, memcmp_res, "one elem");
	// test case three elem
	lst_ptr = NULL;
	new_node1 = ft_lstnew("1");
	ft_lstadd_front(&lst_ptr, new_node1);
	new_node2 = ft_lstnew("2");
	ft_lstadd_front(&lst_ptr, new_node2);
	new_node3 = ft_lstnew("3");
	ft_lstadd_front(&lst_ptr, new_node3);
	last = ft_lstlast(lst_ptr);
	memcmp_res = (last == new_node1) ? 0 : 1;
	if (memcmp_res == 1)
	{
		printf("last node not returned correctly");
	}
	compare_int_res_one_str_fail_only(0, memcmp_res, "three elem");
	return (1);
}

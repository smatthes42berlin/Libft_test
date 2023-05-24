/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <smatthes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 08:51:21 by smatthes          #+#    #+#             */
/*   Updated: 2023/05/21 18:53:07 by smatthes         ###   ########.fr       */
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
	char	*test;
	int		cmp_content;
	int		cmp_next;
	int		memcmp_res;

	// test case empty list
	new_node1 = ft_lstnew("1");
	ft_lstadd_front(&lst_ptr, new_node1);
	memcmp_res = (lst_ptr == new_node1) ? 0 : 1;
	if (memcmp_res == 1)
	{
		printf("node not added correctly");
	}
	compare_int_res_one_str_fail_only(0, memcmp_res, "standard 1");
	// test case one elem
	new_node1 = ft_lstnew("1");
	ft_lstadd_front(&lst_ptr, new_node1);
	new_node2 = ft_lstnew("2");
	ft_lstadd_front(&lst_ptr, new_node2);
	memcmp_res = (lst_ptr == new_node2 && lst_ptr->next == new_node1) ? 0 : 1;
	if (memcmp_res == 1)
	{
		printf("node not added correctly");
	}
	compare_int_res_one_str_fail_only(0, memcmp_res, "standard 1");
	// test case empty list
	new_node1 = ft_lstnew("1");
	ft_lstadd_front(&lst_ptr, new_node1);
	new_node2 = ft_lstnew("2");
	ft_lstadd_front(&lst_ptr, new_node2);
	new_node3 = ft_lstnew("3");
	ft_lstadd_front(&lst_ptr, new_node3);
	memcmp_res = (lst_ptr == new_node3 && lst_ptr->next == new_node2
			&& lst_ptr->next->next == new_node1) ? 0 : 1;
	if (memcmp_res == 1)
	{
		printf("node not added correctly");
	}
	compare_int_res_one_str_fail_only(0, memcmp_res, "standard 1");
	return (1);
}

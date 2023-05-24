/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <smatthes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 08:51:21 by smatthes          #+#    #+#             */
/*   Updated: 2023/05/24 16:13:09 by smatthes         ###   ########.fr       */
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
	int		memcmp_res;
	int		lst_size;

	// char	*test;
	// int		cmp_content;
	// int		cmp_next;
	// test case one elem
	new_node1 = ft_lstnew("1");
	ft_lstadd_front(&lst_ptr, new_node1);
	lst_size = ft_lstsize(lst_ptr);
	memcmp_res = (lst_size == 1) ? 0 : 1;
	if (memcmp_res == 1)
	{
		printf("size not correct");
	}
	compare_int_res_one_str_fail_only(0, memcmp_res, " one elem");
	// test case empty list
	lst_ptr = NULL;
	lst_size = ft_lstsize(lst_ptr);
	memcmp_res = (lst_size == 0) ? 0 : 1;
	if (memcmp_res == 1)
	{
		printf("size not correct");
	}
	compare_int_res_one_str_fail_only(0, memcmp_res, " empty list ");
	// test case three elem
	lst_ptr = NULL;
	new_node1 = ft_lstnew("1");
	new_node2 = ft_lstnew("2");
	new_node3 = ft_lstnew("3");
	ft_lstadd_front(&lst_ptr, new_node1);
	ft_lstadd_front(&lst_ptr, new_node2);
	ft_lstadd_front(&lst_ptr, new_node3);
	lst_size = ft_lstsize(lst_ptr);
	memcmp_res = (lst_size == 3) ? 0 : 1;
	if (memcmp_res == 1)
	{
		printf("size not correct");
	}
	compare_int_res_one_str_fail_only(0, memcmp_res, " three elem ");
}

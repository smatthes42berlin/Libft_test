/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <smatthes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 08:51:21 by smatthes          #+#    #+#             */
/*   Updated: 2023/05/24 17:56:37 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_test.h"

void delete (void *to_del)
{
    return;
}

int	main(void)
{
	t_list	*lst_ptr;
	t_list	*new_node1;
	t_list	*new_node2;
	t_list	*new_node3;
	int		memcmp_res;
	int		strcomp_res;

	// char	*test;
	// int		cmp_content;
	// int		cmp_next;
	// test case empty list
	lst_ptr = NULL;
	new_node1 = ft_lstnew("0");
	new_node2 = ft_lstnew("1");
	new_node3 = ft_lstnew("2");
	ft_lstadd_back(&lst_ptr, new_node1);
	ft_lstadd_back(&lst_ptr, new_node2);
	ft_lstadd_back(&lst_ptr, new_node3);
	ft_lstdelone(new_node1, &delete);
	printf("\n %s \n", (char *)(new_node1->content));
	strcomp_res = strcmp(new_node1->content, "9");
	memcmp_res = (strcomp_res == 0) ? 0 : 1;
	if (memcmp_res == 1)
	{
		printf("node not deleted correctly");
	}
	compare_int_res_one_str_fail_only(0, memcmp_res, "standard 1");
}

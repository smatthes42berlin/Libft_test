/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_new_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <smatthes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 08:51:21 by smatthes          #+#    #+#             */
/*   Updated: 2023/05/21 18:34:25 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_test.h"

int	main(void)
{
	t_list	*lst_ptr;
	char	*test;
	int		cmp_content;
	int		cmp_next;
	int		memcmp_res;

	lst_ptr = ft_lstnew("abc");
	cmp_content = strcmp("abc", lst_ptr->content);
	memcmp_res = (cmp_content == 0 && lst_ptr->next == NULL) ? 0 : 1;
	if (memcmp_res == 1)
	{
		printf("list node not initialised correctly");
	}
	compare_int_res_one_str_fail_only(0, memcmp_res, "standard 1");
	free(lst_ptr);
	return (1);
}

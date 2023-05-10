/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <smatthes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 10:05:52 by smatthes          #+#    #+#             */
/*   Updated: 2023/05/10 08:39:20 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_test.h"

int	main(void)
{
	char	*test_case;
	int		libc_res;
	int		ft_res;

	test_case = "";
	libc_res = strlen(test_case);
	ft_res = ft_strlen(test_case);
	compare_int_res_one_str(libc_res, ft_res, test_case);
	test_case = "abcdefg";
	libc_res = strlen(test_case);
	ft_res = ft_strlen(test_case);
	compare_int_res_one_str(libc_res, ft_res, test_case);
	test_case = "sfd\0fghd\0";
	libc_res = strlen(test_case);
	ft_res = ft_strlen(test_case);
	compare_int_res_one_str(libc_res, ft_res, test_case);
	test_case = "sdfgsdfg";
	libc_res = strlen(test_case);
	ft_res = ft_strlen(test_case);
	compare_int_res_one_str(libc_res, ft_res, test_case);
	test_case = "13fhkl^&@*$<>?";
	libc_res = strlen(test_case);
	ft_res = ft_strlen(test_case);
	compare_int_res_one_str(libc_res, ft_res, test_case);
}

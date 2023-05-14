/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <smatthes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 08:51:21 by smatthes          #+#    #+#             */
/*   Updated: 2023/05/14 10:16:32 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_test.h"

int	main(void)
{
	char *src1;
	char *src2;
	char *res_is;
	char *test_name;
	char *res_should;
	int cmp_res;

	// new Test
	test_name = "test 1";
	src1 = "123";
	src2 = "456";
	res_should = "123456";
	res_is = ft_strjoin(src1, src2);
	cmp_res = strcmp(res_should, res_is);
	compare_int_res_one_str_fail_only(0, cmp_res, test_name);
	free(res_is);
	// new Test
	test_name = "test 2";
	src1 = "123";
	src2 = "";
	res_should = "123";
	res_is = ft_strjoin(src1, src2);
	cmp_res = strcmp(res_should, res_is);
	compare_int_res_one_str_fail_only(0, cmp_res, test_name);
	free(res_is);
	// new Test
	test_name = "test 3";
	src1 = "";
	src2 = "";
	res_should = "";
	res_is = ft_strjoin(src1, src2);
	cmp_res = strcmp(res_should, res_is);
	compare_int_res_one_str_fail_only(0, cmp_res, test_name);
	free(res_is);
	// new Test
	test_name = "test 4";
	src1 = "fdgsfdg";
	src2 = "dsgfsagf";
	res_should = "fdgsfdgdsgfsagf";
	res_is = ft_strjoin(src1, src2);
	cmp_res = strcmp(res_should, res_is);
	compare_int_res_one_str_fail_only(0, cmp_res, test_name);
	free(res_is);
	// new Test
	test_name = "test 5";
	src1 = "";
	src2 = "456";
	res_should = "456";
	res_is = ft_strjoin(src1, src2);
	cmp_res = strcmp(res_should, res_is);
	compare_int_res_one_str_fail_only(0, cmp_res, test_name);
	free(res_is);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <smatthes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 08:51:21 by smatthes          #+#    #+#             */
/*   Updated: 2023/05/14 12:03:22 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_test.h"

int	main(void)
{
	char *src;
	char *set;
	char *res_is;
	char *test_name;
	char *res_should;
	int cmp_res;

	// new Test
	test_name = "test 1";
	src = "   123   ";
	set = " ";
	res_should = "123";
	res_is = ft_strtrim(src, set);
	cmp_res = strcmp(res_should, res_is);
	compare_int_res_one_str_fail_only(0, cmp_res, test_name);
	free(res_is);
	// new Test
	test_name = "test 2";
	src = "   1 23   ";
	set = " ";
	res_should = "1 23";
	res_is = ft_strtrim(src, set);
	cmp_res = strcmp(res_should, res_is);
	compare_int_res_one_str_fail_only(0, cmp_res, test_name);
	free(res_is);
	// new Test
	test_name = "test 3";
	src = "   1 2  3   ";
	set = " ";
	res_should = "1 2  3";
	res_is = ft_strtrim(src, set);
	cmp_res = strcmp(res_should, res_is);
	compare_int_res_one_str_fail_only(0, cmp_res, test_name);
	free(res_is);
	// new Test
	test_name = "test 4";
	src = "   123";
	set = " ";
	res_should = "123";
	res_is = ft_strtrim(src, set);
	cmp_res = strcmp(res_should, res_is);
	compare_int_res_one_str_fail_only(0, cmp_res, test_name);
	free(res_is);
	// new Test
	test_name = "test 5";
	src = "aaa1a2a3aaaa";
	set = "aaa";
	res_should = "1a2a3";
	res_is = ft_strtrim(src, set);
	cmp_res = strcmp(res_should, res_is);
	compare_int_res_one_str_fail_only(0, cmp_res, test_name);
	free(res_is);
	// new Test
	test_name = "test 6";
	src = "   123   ";
	set = "";
	res_should = "   123   ";
	res_is = ft_strtrim(src, set);
	cmp_res = strcmp(res_should, res_is);
	compare_int_res_one_str_fail_only(0, cmp_res, test_name);
	free(res_is);
	// new Test
	test_name = "test 7";
	src = "   123";
	set = "   123";
	res_should = "";
	res_is = ft_strtrim(src, set);
	cmp_res = strcmp(res_should, res_is);
	compare_int_res_one_str_fail_only(0, cmp_res, test_name);
	free(res_is);
}
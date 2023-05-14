/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <smatthes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 08:51:21 by smatthes          #+#    #+#             */
/*   Updated: 2023/05/14 09:48:02 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_test.h"

int	main(void)
{
	char *src;
	char *sub_is;
	char *test_name;
	char *sub_should;
	unsigned int start;
	size_t len;
	int cmp_res;

	// new Test
	test_name = "test 1";
	src = "123456789";
	start = 2;
	len = 3;
	sub_should = "345";
	sub_is = ft_substr(src, start, len);
	cmp_res = strcmp(sub_is, sub_should);
	compare_int_res_one_str_fail_only(0, cmp_res, test_name);
	free(sub_is);
	// new Test
	test_name = "test 2";
	src = "123456789";
	start = 20;
	len = 25;
	sub_should = "";
	sub_is = ft_substr(src, start, len);
	cmp_res = strcmp(sub_is, sub_should);
	compare_int_res_one_str_fail_only(0, cmp_res, test_name);
	free(sub_is);
	// new Test
	test_name = "test 3";
	src = "123456789";
	start = 2;
	len = 25;
	sub_should = "3456789";
	sub_is = ft_substr(src, start, len);
	cmp_res = strcmp(sub_is, sub_should);
	compare_int_res_one_str_fail_only(0, cmp_res, test_name);
	free(sub_is);
	// new Test
	test_name = "test 4";
	src = "";
	start = 2;
	len = 3;
	sub_should = "";
	sub_is = ft_substr(src, start, len);
	cmp_res = strcmp(sub_is, sub_should);
	compare_int_res_one_str_fail_only(0, cmp_res, test_name);
	free(sub_is);
	// new Test
	test_name = "test 5";
	src = "123456789";
	start = 2;
	len = 0;
	sub_should = "";
	sub_is = ft_substr(src, start, len);
	cmp_res = strcmp(sub_is, sub_should);
	compare_int_res_one_str_fail_only(0, cmp_res, test_name);
	free(sub_is);
	// new Test
	test_name = "test 6";
	src = "123456789";
	start = 0;
	len = 2;
	sub_should = "12";
	sub_is = ft_substr(src, start, len);
	cmp_res = strcmp(sub_is, sub_should);
	compare_int_res_one_str_fail_only(0, cmp_res, test_name);
	free(sub_is);
	// new Test
	test_name = "test 7";
	src = "1";
	start = 0;
	len = 25;
	sub_should = "1";
	sub_is = ft_substr(src, start, len);
	cmp_res = strcmp(sub_is, sub_should);
	compare_int_res_one_str_fail_only(0, cmp_res, test_name);
	free(sub_is);
	// new Test
	test_name = "test 8";
	src = "i just want this part #############";
	start = 5;
	len = 10;
	sub_should = "t want thi";
	sub_is = ft_substr(src, start, len);
	cmp_res = strcmp(sub_is, sub_should);
	compare_int_res_one_str_fail_only(0, cmp_res, test_name);
	free(sub_is);
	// new Test
	test_name = "test 9";
	src = "12345";
	start = 5;
	len = 2;
	sub_should = "";
	sub_is = ft_substr(src, start, len);
	cmp_res = strcmp(sub_is, sub_should);
	compare_int_res_one_str_fail_only(0, cmp_res, test_name);
	free(sub_is);
	// new Test
	test_name = "test 7";
	src = "1";
	start = 0;
	len = 25;
	sub_should = "1";
	sub_is = ft_substr(src, start, len);
	cmp_res = strcmp(sub_is, sub_should);
	compare_int_res_one_str_fail_only(0, cmp_res, test_name);
	free(sub_is);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <smatthes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 08:51:21 by smatthes          #+#    #+#             */
/*   Updated: 2023/05/14 15:34:48 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_test.h"

int	main(void)
{
	char const *srcStr;
	char *res_is;
	char *test_name;
	char c;
	int cmp_res;
	int len_res;
	char *res_should;
	int i;

	// new Test
	test_name = "test 1";
	srcStr = "aaaa324aaa";
	res_is = ft_strmapi(srcStr, &test_map_to_upper);
	res_should = "AAAA324AAA";
	cmp_res = strcmp(res_is, res_should);
	cmp_res = (cmp_res == 0) ? 0 : 1;
	compare_int_res_one_str_fail_only(0, cmp_res, test_name);
	if (cmp_res == 1)
	{
		printf("string == $%s$\n", srcStr);
		printf("my res == %s$\n", res_is);
		printf("needed res == %s$\n\n", res_should);
	}
	free(res_is);
	// new Test
	test_name = "test 2";
	srcStr = "";
	res_is = ft_strmapi(srcStr, &test_map_to_upper);
	res_should = "";
	cmp_res = strcmp(res_is, res_should);
	cmp_res = (cmp_res == 0) ? 0 : 1;
	compare_int_res_one_str_fail_only(0, cmp_res, test_name);
	if (cmp_res == 1)
	{
		printf("string == $%s$\n", srcStr);
		printf("my res == %s$\n", res_is);
		printf("needed res == %s$\n\n", res_should);
	}
	free(res_is);
	// new Test
	test_name = "test 3";
	srcStr = "111111";
	res_is = ft_strmapi(srcStr, &test_map_to_upper);
	res_should = "111111";
	cmp_res = strcmp(res_is, res_should);
	cmp_res = (cmp_res == 0) ? 0 : 1;
	compare_int_res_one_str_fail_only(0, cmp_res, test_name);
	if (cmp_res == 1)
	{
		printf("string == $%s$\n", srcStr);
		printf("my res == %s$\n", res_is);
		printf("needed res == %s$\n\n", res_should);
	}
	free(res_is);
	// new Test
	test_name = "test 1";
	srcStr = "ffffffaaaa";
	res_is = ft_strmapi(srcStr, &test_map_to_upper);
	res_should = "FFFFFFAAAA";
	cmp_res = strcmp(res_is, res_should);
	cmp_res = (cmp_res == 0) ? 0 : 1;
	compare_int_res_one_str_fail_only(0, cmp_res, test_name);
	if (cmp_res == 1)
	{
		printf("string == $%s$\n", srcStr);
		printf("my res == %s$\n", res_is);
		printf("needed res == %s$\n\n", res_should);
	}
	free(res_is);
}
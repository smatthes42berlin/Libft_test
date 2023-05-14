/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <smatthes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 08:51:21 by smatthes          #+#    #+#             */
/*   Updated: 2023/05/14 14:58:52 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_test.h"

int	main(void)
{
	char const *srcStr;
	char **res_is;
	char *test_name;
	char c;
	int cmp_res;
	int len_res;
	char *res_should[10];
	int i;

	// new Test
	test_name = "test 1";
	srcStr = "xxxxhello!";
	c = 'x';
	len_res = 1;
	i = -1;
	res_is = ft_split(srcStr, c);
	cmp_res = 0;
	res_should[0] = "hello!";
	while (++i < len_res)
	{
		if (strcmp(res_should[i], res_is[i]) != 0)
		{
			cmp_res = 1;
			break ;
		}
	}
	if (res_is[len_res] != NULL)
		cmp_res = 1;
	compare_int_res_one_str_fail_only(0, cmp_res, test_name);
	i = -1;
	while (res_is[++i])
		free(res_is[i]);
	free(res_is);
	// new Test
	test_name = "test 2";
	srcStr = "112112112";
	c = '3';
	len_res = 1;
	i = -1;
	res_is = ft_split(srcStr, c);
	cmp_res = 0;
	res_should[0] = "112112112";
	while (++i < len_res - 1)
	{
		if (strcmp(res_should[i], res_is[i]) != 0)
		{
			cmp_res = 1;
			break ;
		}
	}
	if (res_is[len_res] != NULL)
		cmp_res = 1;
	compare_int_res_one_str_fail_only(0, cmp_res, test_name);
	i = -1;
	while (res_is[++i])
		free(res_is[i]);
	free(res_is);
	// new Test
	test_name = "test 3";
	srcStr = "";
	c = '2';
	len_res = 0;
	i = -1;
	res_is = ft_split(srcStr, c);
	cmp_res = 0;
	res_should[0] = NULL;
	if (res_is[len_res] != NULL)
		cmp_res = 1;
	compare_int_res_one_str_fail_only(0, cmp_res, test_name);
	i = -1;
	while (res_is[++i])
		free(res_is[i]);
	free(res_is);
	// new Test
	test_name = "test 1";
	srcStr = "215567";
	c = '5';
	len_res = 2;
	i = -1;
	res_is = ft_split(srcStr, c);
	cmp_res = 0;
	res_should[0] = "21";
	res_should[1] = "67";
	while (++i < len_res - 1)
	{
		if (strcmp(res_should[i], res_is[i]) != 0)
		{
			cmp_res = 1;
			break ;
		}
	}
	if (res_is[len_res] != NULL)
		cmp_res = 1;
	compare_int_res_one_str_fail_only(0, cmp_res, test_name);
	i = -1;
	while (res_is[++i])
		free(res_is[i]);
	free(res_is);
}
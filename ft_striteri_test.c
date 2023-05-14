/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <smatthes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 08:51:21 by smatthes          #+#    #+#             */
/*   Updated: 2023/05/14 16:02:36 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_test.h"

int	main(void)
{
	char *srcStr;
	char *srcStr1;
	char *test_name;
	int cmp_res;
	char *res_should;

	// new Test
	test_name = "test 1";
	srcStr1 = "AAAA324AAA";
	srcStr = malloc(sizeof(char) * (1 + ft_strlen(srcStr1)));
	strcpy(srcStr, srcStr1);
	ft_striteri(srcStr, &test_iter_to_upper);
	res_should = "AAAA324AAA";
	cmp_res = strcmp(srcStr, res_should);
	cmp_res = (cmp_res == 0) ? 0 : 1;
	compare_int_res_one_str_fail_only(0, cmp_res, test_name);
	if (cmp_res == 1)
	{
		printf("src == $%s$\n", srcStr);
		printf("needed res == %s$\n\n", res_should);
	}
    free(srcStr);
	// new Test
	test_name = "test 2";
	srcStr1 = "";
	srcStr = malloc(sizeof(char) * (1 + ft_strlen(srcStr1)));
	strcpy(srcStr, srcStr1);
	ft_striteri(srcStr, &test_iter_to_upper);
	res_should = "";
	cmp_res = strcmp(srcStr, res_should);
	cmp_res = (cmp_res == 0) ? 0 : 1;
	compare_int_res_one_str_fail_only(0, cmp_res, test_name);
	if (cmp_res == 1)
	{
		printf("src == $%s$\n", srcStr);
		printf("needed res == %s$\n\n", res_should);
	}
    free(srcStr);
}
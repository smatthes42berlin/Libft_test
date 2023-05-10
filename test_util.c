/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_util.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <smatthes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 11:43:26 by smatthes          #+#    #+#             */
/*   Updated: 2023/05/10 09:50:22 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_test.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	run_test_one_int(int expected_res, int test_val, char *gen_name,
		int (*func)(int c))
{
	int	test_res;

	test_res = (*func)(test_val);
	if (expected_res == test_res)
	{
		printf("PASSED:");
		printf("\t%s %d", gen_name, test_val);
		printf("\n");
	}
	else
	{
		printf("FAILED:");
		printf("\t%s %d", gen_name, test_val);
		printf("\texpected Res = %d", expected_res);
		printf("\tactual Res = %d", test_res);
		printf("\n");
	}
}

void	compare_int_res_one_str(int libc_res, int ft_res, char *test_case)
{
	if (libc_res == ft_res)
	{
		print_passed_msg(test_case);
	}
	else
	{
		print_failed_msg_one_int(test_case, ft_res, libc_res);	
	}
}

void	compare_strs(int libc_res, int ft_res, int strcmp_res, char *test_case)
{
	if (libc_res == ft_res && strcmp_res == 0)
	{
		print_passed_msg(test_case);
	}
	else
	{
		print_failed_msg_one_int(test_case, ft_res, libc_res);	
	}
}

void	print_passed_msg(char *test_case)
{
	printf("PASSED:");
	printf("\tTest Case: %s", test_case);
	printf("\n");
}

void	print_failed_msg_one_int(char *test_case, int ft_res, int libc_res)
{
	printf("FAILED:");
	printf("\tTest Case: %-20s", test_case);
	printf("\texpected Res = %d", libc_res);
	printf("\tactual Res = %d", ft_res);
	printf("\n");
}
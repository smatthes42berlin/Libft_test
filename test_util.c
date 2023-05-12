/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_util.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <smatthes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 11:43:26 by smatthes          #+#    #+#             */
/*   Updated: 2023/05/12 11:18:21 by smatthes         ###   ########.fr       */
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

void	compare_int_res_one_str_fail_only(int libc_res, int ft_res,
		char *test_case)
{
	if (libc_res != ft_res)
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

char	*rand_string(char *str, size_t size)
{
	size_t	i;
	int		rand_num;

	// time_t t;
	// char c[] = {'a', 'b', 'c', 'd'};
	// srand((unsigned)time(&t));
	i = 0;
	while (i < size)
	{
		// rand_num = rand() % 1000;
		// rand_num = (rand() % (126 - 33)) + 33;
		rand_num = rand() % 255;
		// rand_num = rand() % (sizeof(c) - 1);
		str[i] = (unsigned char)rand_num;
		// str[i] = c[rand_num];
		i++;
	}
	str[size] = '\0';
	return (str);
}

void	*rand_mem(void *str, size_t size)
{
	size_t			i;
	int				rand_num;
	unsigned char	*str_u;

	str_u = (unsigned char *)str;
	i = 0;
	while (i < size)
	{
		// rand_num = rand() % 255;
		rand_num = (rand() % (126 - 33)) + 33;
		str_u[i] = (unsigned char)rand_num;
		i++;
	}
	return (str);
}

char	*get_dig_str(char *str, size_t size)
{
	size_t i;
	int rand_num;
	int test;

	i = 0;
	test = rand();
	if (test % 2 == 0)
	{
		str[i] = '-';
		i++;
	}
	while (i < size)
	{
		rand_num = (rand() % 9) + 48;
		str[i] = rand_num;
		i++;
	}
	str[size] = '\0';
	return (str);
}
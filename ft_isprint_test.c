/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <smatthes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 10:05:52 by smatthes          #+#    #+#             */
/*   Updated: 2023/05/07 15:55:38 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

void	run_test_one_int(int expected_res, int test_val, char *gen_name,
		int (*func)(int c));

int	main(void)
{
	char message[50];
	int test_chars_pass[50];
	int test_chars_fail[50];
	int i;

	test_chars_pass[0] = ' ';
	test_chars_pass[1] = 32;
	test_chars_pass[2] = 126;
	test_chars_pass[3] = '~';
	test_chars_pass[4] = 'a';
	test_chars_pass[5] = 'Z';
	test_chars_pass[6] = 'n';

	test_chars_fail[0] = 31;
	test_chars_fail[1] = 12;
	test_chars_fail[6] = '\n';
	test_chars_fail[7] = 127;
	test_chars_fail[8] = 1523688;
	test_chars_fail[9] = -56521;
	test_chars_fail[10] = -1;
	test_chars_fail[11] = INT_MAX;
	test_chars_fail[12] = INT_MIN;
	test_chars_fail[13] = 0;
	test_chars_fail[14] = 'n';

	strcpy(message, "check ");
	i = -1;
	while (test_chars_pass[++i] != 'n')
	{
		run_test_one_int(1, test_chars_pass[i], message, &ft_isprint);
	}
	i = -1;
	while (test_chars_fail[++i] != 'n')
	{
		run_test_one_int(0, test_chars_fail[i], message, &ft_isprint);
	}
}
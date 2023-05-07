/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <smatthes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 14:15:58 by smatthes          #+#    #+#             */
/*   Updated: 2023/05/07 14:25:57 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

void	run_test_one_int(int expected_res, int test_val, char *gen_name,
		int (*func)(int c));
int		ft_isalnum(int c);

int	main(void)
{
	char message[50];
	int test_chars_pass[50];
	int test_chars_fail[50];
	int i;

	test_chars_pass[0] = 'a';
	test_chars_pass[1] = 'z';
	test_chars_pass[2] = 'A';
	test_chars_pass[3] = 'Z';
	test_chars_pass[4] = 'k';
	test_chars_pass[5] = 'K';
	test_chars_pass[6] = '0';
	test_chars_pass[7] = '5';
	test_chars_pass[8] = '9';
	test_chars_pass[9] = 'n';

	test_chars_fail[0] = '@';
	test_chars_fail[1] = '[';
	test_chars_fail[2] = '`';
	test_chars_fail[3] = '{';
	test_chars_fail[4] = '{';
	test_chars_fail[5] = '%';
	test_chars_fail[6] = '\n';
	test_chars_fail[7] = 250;
	test_chars_fail[8] = 1523688;
	test_chars_fail[9] = -56521;
	test_chars_fail[10] = -1;
	test_chars_fail[11] = INT_MAX;
	test_chars_fail[12] = INT_MIN;
	test_chars_fail[13] = 58;
	test_chars_fail[14] = 47;
	test_chars_fail[16] = 0;
	test_chars_fail[17] = 'n';

	strcpy(message, "check ");
	i = -1;
	while (test_chars_pass[++i] != 'n')
	{
		run_test_one_int(1, test_chars_pass[i], message, &ft_isalnum);
	}
	i = -1;
	while (test_chars_fail[++i] != 'n')
	{
		run_test_one_int(0, test_chars_fail[i], message, &ft_isalnum);
	}
}
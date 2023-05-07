/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <smatthes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 10:05:52 by smatthes          #+#    #+#             */
/*   Updated: 2023/05/07 15:55:33 by smatthes         ###   ########.fr       */
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
	char	message[50];
	int		test_chars_pass[50];
	int		test_chars_fail[50];
	int		i;

	test_chars_pass[0] = '\0';
	test_chars_pass[1] = '\n';
	test_chars_pass[2] = '\t';
	test_chars_pass[3] = 'a';
	test_chars_pass[4] = 'Z';
	test_chars_pass[5] = 127;
	test_chars_pass[6] = '~';
	test_chars_pass[7] = '|';
	test_chars_pass[9] = 'n';
	
	test_chars_fail[0] = 128;
	test_chars_fail[1] = -1;
	test_chars_fail[2] = INT_MIN;
	test_chars_fail[3] = INT_MAX;
	test_chars_fail[4] = 'n';
	strcpy(message, "check ");
	i = -1;
	while (test_chars_pass[++i] != 'n')
	{
		run_test_one_int(1, test_chars_pass[i], message, &ft_isascii);
	}
	i = -1;
	while (test_chars_fail[++i] != 'n')
	{
		run_test_one_int(0, test_chars_fail[i], message, &ft_isascii);
	}
}

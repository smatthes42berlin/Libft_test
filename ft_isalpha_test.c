/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <smatthes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:13:57 by smatthes          #+#    #+#             */
/*   Updated: 2023/05/05 17:52:59 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	run_test(int expected_res, char test_char, char *gen_name,
			char *test_name);
int		ft_isalpha(char c);

int	main(void)
{
	char	str[2];
	char	message[50];

	strcpy(message, "check ");
	str[1] = '\0';
	str[0] = 'a';
	run_test(1, str[0], message, str);
	str[0] = 'z';
	run_test(1, str[0], message, str);
	str[0] = 'A';
	run_test(1, str[0], message, str);
	str[0] = 'Z';
	run_test(1, str[0], message, str);
	str[0] = 'k';
	run_test(1, str[0], message, str);
	str[0] = 'K';
	run_test(1, str[0], message, str);
	str[0] = '@';
	run_test(0, str[0], message, str);
	str[0] = '[';
	run_test(0, str[0], message, str);
	str[0] = '`';
	run_test(0, str[0], message, str);
	str[0] = '{';
	run_test(0, str[0], message, str);
	str[0] = '5';
	run_test(0, str[0], message, str);
	str[0] = '%';
	run_test(0, str[0], message, str);
	str[0] = '\n';
	run_test(0, str[0], message, str);
}

void	run_test(int expected_res, char test_char, char *gen_name,
		char *test_name)
{
	int test_res;

	test_res = ft_isalpha(test_char);
	if (expected_res == test_res)
	{
		printf("PASSED:");
		printf("\t%s %s", gen_name, test_name);
		printf("\n");
	}
	else
	{
		printf("FAILED:");
		printf("\t%s %s", gen_name, test_name);
		printf("\texpected Res = %d", expected_res);
		printf("\tactual Res = %d", test_res);
		printf("\n");
	}
}
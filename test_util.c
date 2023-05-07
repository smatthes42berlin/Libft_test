/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_util.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <smatthes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 11:43:26 by smatthes          #+#    #+#             */
/*   Updated: 2023/05/07 15:55:06 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

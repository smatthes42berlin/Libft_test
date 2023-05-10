/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_test.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <smatthes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 08:32:54 by smatthes          #+#    #+#             */
/*   Updated: 2023/05/10 09:49:39 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_TEST_H
# define LIBFT_TEST_H

# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

void	run_test_one_int(int expected_res, int test_val, char *gen_name,
			int (*func)(int c));
void	compare_int_res_one_str(int libc_res,
								int ft_res,
								char *test_case);
void	print_passed_msg(char *test_case);
void	print_failed_msg_one_int(char *test_case, int ft_res, int libc_res);
void	compare_strs(int libc_res, int ft_res, int strcmp_res, char *test_case);

#endif
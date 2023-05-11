/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <smatthes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 10:05:52 by smatthes          #+#    #+#             */
/*   Updated: 2023/05/11 19:34:56 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <smatthes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 08:51:21 by smatthes          #+#    #+#             */
/*   Updated: 2023/05/10 12:15:51 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_test.h"

int	main(void)
{
	char	*res_ft;
	char	*res_libc;
	int		num;
	int		strcmp_res;

	num = INT_MAX;
	res_ft = ft_itoa(num);
	res_libc = "2147483647";
	strcmp_res = (strcmp(res_ft, res_libc)) ? 1 : 0;
	if (strcmp_res == 1)
	{
		printf("num == $%d$\n", num);
		printf("my res == %s$\n", res_ft);
		printf("needed res == %s$\n\n", res_libc);
	}
	compare_int_res_one_str_fail_only(0, strcmp_res, "standard 1");
	free(res_ft);
	num = INT_MIN;
	res_ft = ft_itoa(num);
	res_libc = "-2147483648";
	strcmp_res = (strcmp(res_ft, res_libc)) ? 1 : 0;
	if (strcmp_res == 1)
	{
		printf("num == $%d$\n", num);
		printf("my res == %s$\n", res_ft);
		printf("needed res == %s$\n\n", res_libc);
	}
	compare_int_res_one_str_fail_only(0, strcmp_res, "standard 1");
	free(res_ft);
	num = 0;
	res_ft = ft_itoa(num);
	res_libc = "0";
	strcmp_res = (strcmp(res_ft, res_libc)) ? 1 : 0;
	if (strcmp_res == 1)
	{
		printf("num == $%d$\n", num);
		printf("my res == %s$\n", res_ft);
		printf("needed res == %s$\n\n", res_libc);
	}
	compare_int_res_one_str_fail_only(0, strcmp_res, "standard 1");
	free(res_ft);
	num = 125;
	res_ft = ft_itoa(num);
	res_libc = "125";
	strcmp_res = (strcmp(res_ft, res_libc)) ? 1 : 0;
	if (strcmp_res == 1)
	{
		printf("num == $%d$\n", num);
		printf("my res == %s$\n", res_ft);
		printf("needed res == %s$\n\n", res_libc);
	}
	compare_int_res_one_str_fail_only(0, strcmp_res, "standard 1");
	free(res_ft);
}

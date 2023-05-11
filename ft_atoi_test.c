/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <smatthes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 10:05:52 by smatthes          #+#    #+#             */
/*   Updated: 2023/05/11 17:31:25 by smatthes         ###   ########.fr       */
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
	char	*src1;
	int		res_ft;
	int		res_libc;
	int		size;
	time_t	t;
	int		i;
	int		strcmp_res;

	srand((unsigned)time(&t));
	i = 0;
	while (i < 10)
	{
		size = rand() % 10;
		src1 = malloc(sizeof(*src1) * (size + 1));
		get_dig_str(src1, size);
		res_libc = atoi(src1);
		res_ft = ft_atoi(src1);
		strcmp_res = (res_libc != res_ft) ? 1 : 0;
		if (strcmp_res == 1)
		{
			printf("string == $%s$\n", src1);
			printf("my res == %d$\n", res_ft);
			printf("needed res == %d$\n\n", res_libc);
		}
		compare_int_res_one_str_fail_only(0, strcmp_res, "standard 1");
		free(src1);
		i++;
	}
	src1 = "--++465645";
	res_libc = atoi(src1);
	res_ft = ft_atoi(src1);
	strcmp_res = (res_libc != res_ft) ? 1 : 0;
	if (strcmp_res == 1)
	{
		printf("string == $%s$\n", src1);
		printf("my res == %d$\n", res_ft);
		printf("needed res == %d$\n\n", res_libc);
	}
	compare_int_res_one_str_fail_only(0, strcmp_res, "standard 1");
    	src1 = "";
	res_libc = atoi(src1);
	res_ft = ft_atoi(src1);
	strcmp_res = (res_libc != res_ft) ? 1 : 0;
	if (strcmp_res == 1)
	{
		printf("string == $%s$\n", src1);
		printf("my res == %d$\n", res_ft);
		printf("needed res == %d$\n\n", res_libc);
	}
	compare_int_res_one_str_fail_only(0, strcmp_res, "standard 1");
	src1 = "-ad465645";
	res_libc = atoi(src1);
	res_ft = ft_atoi(src1);
	strcmp_res = (res_libc != res_ft) ? 1 : 0;
	if (strcmp_res == 1)
	{
		printf("string == $%s$\n", src1);
		printf("my res == %d$\n", res_ft);
		printf("needed res == %d$\n\n", res_libc);
	}
	compare_int_res_one_str_fail_only(0, strcmp_res, "standard 1");
	src1 = "2663-";
	res_libc = atoi(src1);
	res_ft = ft_atoi(src1);
	strcmp_res = (res_libc != res_ft) ? 1 : 0;
	if (strcmp_res == 1)
	{
		printf("string == $%s$\n", src1);
		printf("my res == %d$\n", res_ft);
		printf("needed res == %d$\n\n", res_libc);
	}
	compare_int_res_one_str_fail_only(0, strcmp_res, "standard 1");
	src1 = "    -2663-";
	res_libc = atoi(src1);
	res_ft = ft_atoi(src1);
	strcmp_res = (res_libc != res_ft) ? 1 : 0;
	if (strcmp_res == 1)
	{
		printf("string == $%s$\n", src1);
		printf("my res == %d$\n", res_ft);
		printf("needed res == %d$\n\n", res_libc);
	}
	compare_int_res_one_str_fail_only(0, strcmp_res, "standard 1");
	src1 = "    2663";
	res_libc = atoi(src1);
	res_ft = ft_atoi(src1);
	strcmp_res = (res_libc != res_ft) ? 1 : 0;
	if (strcmp_res == 1)
	{
		printf("string == $%s$\n", src1);
		printf("my res == %d$\n", res_ft);
		printf("needed res == %d$\n\n", res_libc);
	}
	compare_int_res_one_str_fail_only(0, strcmp_res, "standard 1");

	src1 = "\n2663";
	res_libc = atoi(src1);
	res_ft = ft_atoi(src1);
	strcmp_res = (res_libc != res_ft) ? 1 : 0;
	if (strcmp_res == 1)
	{
		printf("string == $%s$\n", src1);
		printf("my res == %d$\n", res_ft);
		printf("needed res == %d$\n\n", res_libc);
	}
	compare_int_res_one_str_fail_only(0, strcmp_res, "standard 1");
	src1 = "\t\n\f\r\v 2663";
	res_libc = atoi(src1);
	res_ft = ft_atoi(src1);
	strcmp_res = (res_libc != res_ft) ? 1 : 0;
	if (strcmp_res == 1)
	{
		printf("string == $%s$\n", src1);
		printf("my res == %d$\n", res_ft);
		printf("needed res == %d$\n\n", res_libc);
	}
	compare_int_res_one_str_fail_only(0, strcmp_res, "standard 1");
	src1 = "";
	res_libc = atoi(src1);
	res_ft = ft_atoi(src1);
	strcmp_res = (res_libc != res_ft) ? 1 : 0;
	if (strcmp_res == 1)
	{
		printf("string == $%s$\n", src1);
		printf("my res == %d$\n", res_ft);
		printf("needed res == %d$\n\n", res_libc);
	}
	compare_int_res_one_str_fail_only(0, strcmp_res, "standard 1");
	src1 = "-";
	res_libc = atoi(src1);
	res_ft = ft_atoi(src1);
	strcmp_res = (res_libc != res_ft) ? 1 : 0;
	if (strcmp_res == 1)
	{
		printf("string == $%s$\n", src1);
		printf("my res == %d$\n", res_ft);
		printf("needed res == %d$\n\n", res_libc);
	}
	compare_int_res_one_str_fail_only(0, strcmp_res, "standard 1");
	src1 = "     \t\v\n";
	res_libc = atoi(src1);
	res_ft = ft_atoi(src1);
	strcmp_res = (res_libc != res_ft) ? 1 : 0;
	if (strcmp_res == 1)
	{
		printf("string == $%s$\n", src1);
		printf("my res == %d$\n", res_ft);
		printf("needed res == %d$\n\n", res_libc);
	}
	compare_int_res_one_str_fail_only(0, strcmp_res, "standard 1");
    src1 = "   +-123";
	res_libc = atoi(src1);
	res_ft = ft_atoi(src1);
	strcmp_res = (res_libc != res_ft) ? 1 : 0;
	if (strcmp_res == 1)
	{
		printf("string == $%s$\n", src1);
		printf("my res == %d$\n", res_ft);
		printf("needed res == %d$\n\n", res_libc);
	}
	compare_int_res_one_str_fail_only(0, strcmp_res, "standard 1");
	src1 = "     \t\v\n -+123";
	res_libc = atoi(src1);
	res_ft = ft_atoi(src1);
	strcmp_res = (res_libc != res_ft) ? 1 : 0;
	if (strcmp_res == 1)
	{
		printf("string == $%s$\n", src1);
		printf("my res == %d$\n", res_ft);
		printf("needed res == %d$\n\n", res_libc);
	}
	compare_int_res_one_str_fail_only(0, strcmp_res, "standard 1");
	src1 = "+1";
	res_libc = atoi(src1);
	res_ft = ft_atoi(src1);
	strcmp_res = (res_libc != res_ft) ? 1 : 0;
	if (strcmp_res == 1)
	{
		printf("string == $%s$\n", src1);
		printf("my res == %d$\n", res_ft);
		printf("needed res == %d$\n\n", res_libc);
	}
	compare_int_res_one_str_fail_only(0, strcmp_res, "standard 1");
	src1 = "+-1";
	res_libc = atoi(src1);
	res_ft = ft_atoi(src1);
	strcmp_res = (res_libc != res_ft) ? 1 : 0;
	if (strcmp_res == 1)
	{
		printf("string == $%s$\n", src1);
		printf("my res == %d$\n", res_ft);
		printf("needed res == %d$\n\n", res_libc);
	}
	compare_int_res_one_str_fail_only(0, strcmp_res, "standard 1");
	src1 = "-+1";
	res_libc = atoi(src1);
	res_ft = ft_atoi(src1);
	strcmp_res = (res_libc != res_ft) ? 1 : 0;
	if (strcmp_res == 1)
	{
		printf("string == $%s$\n", src1);
		printf("my res == %d$\n", res_ft);
		printf("needed res == %d$\n\n", res_libc);
	}
	compare_int_res_one_str_fail_only(0, strcmp_res, "standard 1");

}

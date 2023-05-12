/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <smatthes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 10:05:52 by smatthes          #+#    #+#             */
/*   Updated: 2023/05/12 16:53:36 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include "libft_test.h"

int	main(void)
{
	void	*src_ft;
	void	*src_libc;
	size_t	size;
	time_t	t;
	int		i;
	int		memcmp_res;
	int		res_libc;

	srand((unsigned)time(&t));
	i = 0;
	while (i < 10000)
	{
		size = rand() % 50;
		src_libc = calloc(size, sizeof(*src_libc));
		src_ft = ft_calloc(size, sizeof(*src_ft));
		res_libc = memcmp(src_libc, src_ft, size);
		memcmp_res = (res_libc == 0) ? 0 : 1;
		if (memcmp_res == 1)
		{
			printf("size = %zu\n", size);
			printf("src libc = %s\n", (unsigned char *)src_libc);
			printf("src ft = %s\n", (unsigned char *)src_ft);
			printf("cmp res = %d\n\n", memcmp_res);
		}
		compare_int_res_one_str_fail_only(0, memcmp_res, "standard 1");
		free(src_ft);
		free(src_libc);
		i++;
	}
	size = rand() % 50;
	src_libc = calloc(0, 0);
	src_ft = ft_calloc(0, 0);
	memcmp_res = (src_ft == src_libc) ? 0 : 1;
	if (memcmp_res == 1)
	{
		printf("size = %zu\n", size);
		printf("src libc = %s\n", (unsigned char *)src_libc);
		printf("src ft = %s\n", (unsigned char *)src_ft);
		printf("cmp res = %d\n\n", memcmp_res);
	}
	compare_int_res_one_str_fail_only(0, memcmp_res, "standard 1");
	free(src_ft);
	free(src_libc);
	// size = INT_MAX;
	// src_libc = calloc(size, 5);
	// src_ft = ft_calloc(size, 5);
	// res_libc = memcmp(src_libc, src_ft, size);
	// memcmp_res = (res_libc == 0) ? 0 : 1;
	// if (memcmp_res == 1)
	// {
	// 	printf("size = %zu\n", size);
	// 	printf("src libc = %s\n", (unsigned char *)src_libc);
	// 	printf("src ft = %s\n", (unsigned char *)src_ft);
	// 	printf("cmp res = %d\n\n", memcmp_res);
	// }
	// compare_int_res_one_str_fail_only(0, memcmp_res, "standard 1");
	// free(src_ft);
	// free(src_libc);
}

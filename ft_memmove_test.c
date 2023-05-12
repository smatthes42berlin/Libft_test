/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <smatthes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 10:05:52 by smatthes          #+#    #+#             */
/*   Updated: 2023/05/12 16:54:08 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_test.h"

int	main(void)
{
	void	*src_ft;
	void	*src_libc;
	void	*dest_ft;
	void	*dest_libc;
	size_t	size;
	size_t	move_n;
	time_t	t;
	int		i;
	int		memcmp_res;
	int		res_ft;
	int		res_libc;

	srand((unsigned)time(&t));
	i = 0;
	while (i < 10000)
	{
		size = rand() % 10;
		move_n = rand() % size;
		src_ft = malloc(sizeof(*src_ft) * (size));
		dest_ft = malloc(sizeof(*dest_ft) * (size));
		dest_libc = malloc(sizeof(*dest_libc) * (size));
		memset(src_ft, 'a', size);
		memset(dest_ft, 'b', size);
		memset(dest_libc, 'b', size);
		ft_memmove(dest_ft, src_ft, move_n);
		memmove(dest_libc, src_ft, move_n);
		res_libc = memcmp(src_ft, dest_libc, move_n);
		res_ft = memcmp(src_ft, dest_ft, move_n);
		memcmp_res = (res_libc == res_ft) ? 0 : 1;
		if (memcmp_res == 1)
		{
			printf("size = %zu\n", size);
			printf("n = %zu\n", move_n);
			printf("src = %s\n", (unsigned char *)src_ft);
			printf("my res = %s\n", (unsigned char *)dest_ft);
			printf("libc res = %s\n", (unsigned char *)dest_libc);
		}
		compare_int_res_one_str_fail_only(0, memcmp_res, "standard 1");
		free(src_ft);
		free(dest_ft);
		free(dest_libc);
		i++;
	}
	// segfault
	// memmove(dest_libc, NULL, move_n);
	// memmove(NULL, dest_ft, move_n);
	// NO segfault
	// memmove(NULL, NULL, move_n);
	move_n = 4;
	src_ft = malloc(sizeof(*src_ft) * (6));
	src_libc = malloc(sizeof(*src_libc) * (6));
	dest_ft = ((unsigned char *)src_ft) + 2;
	dest_libc = ((unsigned char *)src_libc) + 2;
	memcpy(src_ft, "123456", 6);
	memcpy(src_libc, "123456", 6);
	ft_memmove(dest_ft, src_ft, move_n);
	memmove(dest_libc, src_libc, move_n);
	res_libc = memcmp(src_libc, dest_libc, move_n);
	res_ft = memcmp(src_ft, dest_ft, move_n);
	memcmp_res = (res_libc == res_ft) ? 0 : 1;
	if (memcmp_res == 1)
	{
		printf("n = %zu\n", move_n);
		printf("src ft = %s\n", (unsigned char *)src_ft);
		printf("src libc = %s\n", (unsigned char *)src_libc);
		printf("my res = %s\n", (unsigned char *)dest_ft);
		printf("libc res = %s\n", (unsigned char *)dest_libc);
	}
	compare_int_res_one_str_fail_only(0, memcmp_res, "standard 1");
	free(src_ft);
	free(dest_ft);
	free(src_libc);
	free(dest_libc);
	// move_n = 4;
	// src_ft = malloc(sizeof(*src_ft) * (6));
	// src_libc = malloc(sizeof(*src_libc) * (6));
	// dest_ft = ((unsigned char *)src_ft) + 2;
	// dest_libc = ((unsigned char *)src_libc) + 2;
	// memcpy(src_ft, "123456", 10);
	// memcpy(src_libc, "123456", 10);
	// ft_memmove(NULL, NULL, move_n);
	// memmove(NULL, NULL, move_n);
	// res_libc = memcmp(src_libc, dest_libc, move_n);
	// res_ft = memcmp(src_ft, dest_ft, move_n);
	// memcmp_res = (res_libc == res_ft) ? 0 : 1;
	// if (memcmp_res <= 1)
	// {
	// 	printf("size = %zu\n", size);
	// 	printf("n = %zu\n", move_n);
	// 	printf("src ft = %s\n", (unsigned char *)src_ft);
	// 	printf("src libc = %s\n", (unsigned char *)src_libc);
	// 	printf("my res = %s\n", (unsigned char *)dest_ft);
	// 	printf("libc res = %s\n", (unsigned char *)dest_libc);
	// }
	// compare_int_res_one_str_fail_only(0, memcmp_res, "standard 1");
	// free(src_ft);
	// free(dest_ft);
	// free(src_libc);
	// free(dest_libc);
}

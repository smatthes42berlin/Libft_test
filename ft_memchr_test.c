/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <smatthes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 08:51:21 by smatthes          #+#    #+#             */
/*   Updated: 2023/05/12 16:53:47 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_test.h"

int	main(void)
{
	void	*src_ft;
	size_t	size;
	size_t	search_n;
	time_t	t;
	int		i;
	int		memcmp_res;
	void	*res_ft;
	void	*res_libc;
	int		value;

	// void	*src_libc;
	// void	*dest_ft;
	// void	*dest_libc;
	// throw segfault
	// memchr(NULL, value, search_n);
	// return NULL:
	// ft_memchr(src_ft, value, 0);
	srand((unsigned)time(&t));
	i = 0;
	while (i < 10)
	{
		size = rand() % 50;
		search_n = rand() % size;
		value = (rand() % (126 - 33)) + 33;
		src_ft = malloc(sizeof(*src_ft) * (size));
		rand_string(src_ft, size);
		res_libc = memchr(src_ft, value, search_n);
		res_ft = ft_memchr(src_ft, value, search_n);
		memcmp_res = (res_libc == res_ft) ? 0 : 1;
		if (memcmp_res == 1)
		{
			printf("size = %zu\n", size);
			printf("n = %zu\n", search_n);
			printf("value = %c\n", (unsigned char)value);
			printf("src = %s\n", (unsigned char *)src_ft);
			printf("my res = %s\n", (unsigned char *)res_ft);
			printf("libc res = %s\n\n", (unsigned char *)res_libc);
		}
		compare_int_res_one_str_fail_only(0, memcmp_res, "standard 1");
		free(src_ft);
		i++;
	}
	size = rand() % 50;
	search_n = 0;
	value = (rand() % (126 - 33)) + 33;
	src_ft = malloc(sizeof(*src_ft) * (size));
	rand_string(src_ft, size);
	res_libc = memchr(src_ft, value, search_n);
	res_ft = ft_memchr(src_ft, value, search_n);
	memcmp_res = (res_libc == res_ft) ? 0 : 1;
	if (memcmp_res <= 1)
	{
		printf("size = %zu\n", size);
		printf("n = %zu\n", search_n);
		printf("value = %c\n", (unsigned char)value);
		printf("src = %s\n", (unsigned char *)src_ft);
		printf("my res = %s\n", (unsigned char *)res_ft);
		printf("libc res = %s\n", (unsigned char *)res_libc);
	}
	compare_int_res_one_str_fail_only(0, memcmp_res, "standard 1");
	free(src_ft);
	i++;
	// segfault
	// memmove(dest_libc, NULL, search_n);
	// memmove(NULL, dest_ft, search_n);
	// NO segfault
	// memmove(NULL, NULL, search_n);
}

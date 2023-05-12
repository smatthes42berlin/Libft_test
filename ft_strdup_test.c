/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <smatthes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 08:51:21 by smatthes          #+#    #+#             */
/*   Updated: 2023/05/12 17:24:19 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_test.h"

int	main(void)
{
	void *src_ft;
	void *src_libc;
	void *dest_ft;
	void *dest_libc;
	size_t size;
	size_t move_n;
	time_t t;
	int i;
	int memcmp_res;
	int cmp_res;
	char *res_ft;
	char *res_libc;

    // must segfault
    // strdup(NULL);

	srand((unsigned)time(&t));
	i = 0;
	while (i < 10000)
	{
		size = rand() % 200;
		src_ft = malloc(sizeof(*src_ft) * (size));
		rand_string(src_ft, size);
		res_libc = strdup(src_ft);
		res_ft = ft_strdup(src_ft);
		cmp_res = strcmp(res_libc, res_ft);
		memcmp_res = (cmp_res == 0 && res_ft != src_ft) ? 0 : 1;
		if (memcmp_res == 1)
		{
			printf("size = %zu\n", size);
			printf("src = %s\n", (unsigned char *)src_ft);
			printf("my res = %s\n", (unsigned char *)res_ft);
			printf("libc res = %s\n", (unsigned char *)res_libc);
		}
		compare_int_res_one_str_fail_only(0, memcmp_res, "standard 1");
		free(src_ft);
		free(res_ft);
		free(res_libc);
		i++;
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <smatthes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 10:05:52 by smatthes          #+#    #+#             */
/*   Updated: 2023/05/12 17:05:46 by smatthes         ###   ########.fr       */
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

	// should give segfault
	// bzero(NULL, size);

	srand((unsigned)time(&t));
	i = 0;
	while (i < 3)
	{
		size = rand() % 50;
		src_libc = malloc(size * sizeof(*src_libc));
		src_ft = malloc(size * sizeof(*src_ft));
		rand_mem(src_libc, size);
		memcpy(src_ft, src_libc, size);
		bzero(src_libc, size);
		ft_bzero(src_ft, size);
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
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <smatthes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 10:05:52 by smatthes          #+#    #+#             */
/*   Updated: 2023/05/12 16:54:12 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_test.h"

int	main(void)
{
	char	*mem_ft;
	char	*mem_libc;
	int		val;
	size_t	size;
	time_t	t;
	int		i;
	int		memcmp_res;

	srand((unsigned)time(&t));
	i = 0;
	while (i < 10000)
	{
		size = rand() % 100;
		val = rand() % 94 + 32;
		mem_ft = malloc(sizeof(*mem_ft) * (size));
		mem_libc = malloc(sizeof(*mem_libc) * (size));
		memset(mem_libc, val, size);
		ft_memset(mem_ft, val, size);
		memcmp_res = memcmp(mem_ft, mem_libc, size);
		memcmp_res = (memcmp_res == 0) ? 0 : 1;
		if (memcmp_res == 1)
		{
			printf("val == %i, szie = %zu\n", val, size);
			write(1, "\tmy res =\t", 9);
			write(1, mem_ft, size);
			write(1, "\tneeded res =\t", 13);
			write(1, mem_libc, size);
		}
		compare_int_res_one_str_fail_only(0, memcmp_res, "standard 1");
		free(mem_ft);
		free(mem_libc);
		i++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <smatthes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 10:05:52 by smatthes          #+#    #+#             */
/*   Updated: 2023/05/12 16:54:03 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_test.h"

int	main(void)
{
	char	*src;
	char	*dest;
	char	*dest_libc;
	int		val;
	size_t	size;
	time_t	t;
	int		i;
	int		memcmp_res;

	// should work
	// memcpy(NULL, NULL, size);
	// should segfault
	// memcpy(dest, NULL, size);
	// memcpy(NULL, src, size);
	srand((unsigned)time(&t));
	i = 0;
	while (i < 10000)
	{
		size = rand() % 100;
		val = rand() % 94 + 32;
		src = malloc(sizeof(*src) * (size));
		dest = malloc(sizeof(*dest) * (size));
		ft_memset(src, val, size);
		ft_memcpy(dest, src, size);
		memcmp_res = memcmp(src, dest, size);
		memcmp_res = (memcmp_res == 0) ? 0 : 1;
		if (memcmp_res == 1)
		{
			printf("val == %i, szie = %zu\n", val, size);
			write(1, "\tmy res =\t", 9);
			write(1, dest, size);
			write(1, "\tneeded res =\t", 13);
			write(1, src, size);
		}
		compare_int_res_one_str_fail_only(0, memcmp_res, "standard 1");
		free(src);
		free(dest);
		i++;
	}
	i = 0;
	while (i < 0)
	{
		size = rand() % 100;
		val = rand() % 94 + 32;
		src = malloc(sizeof(*src) * (size));
		dest = malloc(sizeof(*dest) * (size));
		if (size % 5 == 0)
			src = NULL;
		if (size % 4 == 0)
			dest = NULL;
		dest_libc = malloc(sizeof(*dest_libc) * (size));
		ft_memset(src, val, size);
		ft_memcpy(dest, src, size);
		memcpy(dest_libc, src, size);
		memcmp_res = memcmp(dest, dest_libc, size);
		memcmp_res = (memcmp_res == 0) ? 0 : 1;
		if (memcmp_res == 1)
		{
			printf("val == %i, szie = %zu\n", val, size);
			write(1, "\tmy res =\t", 9);
			write(1, dest, size);
			write(1, "\tneeded res =\t", 13);
			write(1, dest, size);
		}
		compare_int_res_one_str_fail_only(0, memcmp_res, "standard 1");
		free(src);
		free(dest);
		free(dest_libc);
		i++;
	}
}

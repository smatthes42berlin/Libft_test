/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <smatthes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 10:05:52 by smatthes          #+#    #+#             */
/*   Updated: 2023/05/12 16:54:21 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include "libft_test.h"

int	main(void)
{
	char	*src;
	char	*sub;
	char	*ft_res_ptr;
	char	*libc_res_ptr;
	int		strcmp_res;
	int		cmp_num;
	int		size1;
	int		size2;
	time_t	t;
	int		i;

	srand((unsigned)time(&t));
	i = 0;
	while (i < 100000)
	{
		size1 = rand() % 100;
		size2 = rand() % 5;
		cmp_num = rand() % 15;
		src = malloc((sizeof *src) * size1);
		sub = malloc((sizeof *sub) * size2);
		rand_string(src, size1);
		rand_string(sub, size2);
		ft_res_ptr = ft_strnstr(src, sub, cmp_num);
		libc_res_ptr = strnstr(src, sub, cmp_num);
		strcmp_res = (ft_res_ptr != libc_res_ptr) ? 1 : 0;
		if (strcmp_res == 1)
		{
			printf("big == %s$\n", src);
			printf("little == %s$\n", sub);
			printf("comp num == %d$\n", cmp_num);
			printf("my res == %s$\n", ft_res_ptr);
			printf("needed res == %s$\n\n", libc_res_ptr);
		}
		compare_int_res_one_str_fail_only(0, strcmp_res, "standard 1");
		free(src);
		free(sub);
		i++;
	}
}

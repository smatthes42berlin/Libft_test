/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <smatthes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 10:05:52 by smatthes          #+#    #+#             */
/*   Updated: 2023/05/12 16:54:31 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_test.h"

int	main(void)
{
	char	*src;
	int		c_src;
	int		c_res_ft;
	int		c_res_libc;
	int		strcmp_res;
	time_t	t;
	int		i;

	srand((unsigned)time(&t));
	i = 0;
	while (i < 10)
	{
		src = malloc((sizeof *src) * 2);
		rand_string(src, 2);
		c_src = src[0];
		c_res_ft = ft_toupper(c_src);
		c_res_libc = toupper(c_src);
		strcmp_res = (c_res_libc != c_res_ft) ? 1 : 0;
		if (strcmp_res == 1)
		{
			printf("char == %d$\n", c_src);
			printf("my res == %d$\n", c_res_ft);
			printf("needed res == %d$\n\n", c_res_libc);
		}
		compare_int_res_one_str_fail_only(0, strcmp_res, "standard 1");
		free(src);
		i++;
	}
}

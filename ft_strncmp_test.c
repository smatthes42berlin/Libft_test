/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <smatthes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 10:05:52 by smatthes          #+#    #+#             */
/*   Updated: 2023/05/11 14:39:20 by smatthes         ###   ########.fr       */
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
	char	*src2;
	char	*case_name;
	int		ft_res_ptr;
	int		libc_res_ptr;
	int		strcmp_res;
	int		cmp_num;
	int		size1;
	int		size2;
	time_t	t;
	int		i;

	srand((unsigned)time(&t));
	i = 0;
	while (i < 5000)
	{
		size1 = rand() % 10;
		size2 = rand() % 10;
		cmp_num = rand() % 15;
		case_name = "standard 1";
		src1 = malloc((sizeof *src1) * size1);
		src2 = malloc((sizeof *src2) * size2);
		rand_string(src1, size1);
		rand_string(src2, size2);
		// printf("size1 = %d, size2 = %d, cmp_num = %d\n", size1, size2,
				cmp_num);
		// printf("src1 = %s, src2 = %s\n", src1, src2);
		ft_res_ptr = ft_strncmp(src1, src2, cmp_num);
		libc_res_ptr = strncmp(src1, src2, cmp_num);
		strcmp_res = (ft_res_ptr != libc_res_ptr) ? 1 : 0;
		compare_int_res_one_str(0, strcmp_res, case_name);
		free(src1);
		free(src2);
		i++;
	}
	// src1 = "abcdefg";
	// src2 = "abccdfg";
	// cmp_num = 4;
	// case_name = "standard 1";
	// ft_res_ptr = ft_strncmp(src1, src2, cmp_num);
	// libc_res_ptr = strncmp(src1, src2, cmp_num);
	// strcmp_res = (ft_res_ptr != libc_res_ptr) ? 1 : 0;
	// compare_int_res_one_str(0, strcmp_res, case_name);
	// src1 = "abcdefg";
	// src2 = "abccdfg";
	// cmp_num = 2;
	// case_name = "standard 2";
	// ft_res_ptr = ft_strncmp(src1, src2, cmp_num);
	// libc_res_ptr = strncmp(src1, src2, cmp_num);
	// strcmp_res = (ft_res_ptr != libc_res_ptr) ? 1 : 0;
	// compare_int_res_one_str(0, strcmp_res, case_name);
	// src1 = "abcdefg";
	// src2 = "abccdfg";
	// cmp_num = 7;
	// case_name = "standard 3";
	// ft_res_ptr = ft_strncmp(src1, src2, cmp_num);
	// libc_res_ptr = strncmp(src1, src2, cmp_num);
	// strcmp_res = (ft_res_ptr != libc_res_ptr) ? 1 : 0;
	// compare_int_res_one_str(0, strcmp_res, case_name);
	// src1 = "";
	// src2 = "(bccdfg";
	// cmp_num = 4;
	// case_name = "standard 4";
	// ft_res_ptr = ft_strncmp(src1, src2, cmp_num);
	// libc_res_ptr = strncmp(src1, src2, cmp_num);
	// strcmp_res = (ft_res_ptr != libc_res_ptr) ? 1 : 0;
	// compare_int_res_one_str(0, strcmp_res, case_name);
	// src1 = "";
	// src2 = "";
	// cmp_num = 4;
	// case_name = "standard 5";
	// ft_res_ptr = ft_strncmp(src1, src2, cmp_num);
	// libc_res_ptr = strncmp(src1, src2, cmp_num);
	// strcmp_res = (ft_res_ptr != libc_res_ptr) ? 1 : 0;
	// compare_int_res_one_str(0, strcmp_res, case_name);
	// src1 = "abc";
	// src2 = "cbc";
	// cmp_num = 0;
	// case_name = "standard 6";
	// ft_res_ptr = ft_strncmp(src1, src2, cmp_num);
	// libc_res_ptr = strncmp(src1, src2, cmp_num);
	// strcmp_res = (ft_res_ptr != libc_res_ptr) ? 1 : 0;
	// compare_int_res_one_str(0, strcmp_res, case_name);
	// src1 = "";
	// src2 = "";
	// cmp_num = 0;
	// case_name = "standard 7";
	// ft_res_ptr = ft_strncmp(src1, src2, cmp_num);
	// libc_res_ptr = strncmp(src1, src2, cmp_num);
	// strcmp_res = (ft_res_ptr != libc_res_ptr) ? 1 : 0;
	// compare_int_res_one_str(0, strcmp_res, case_name);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <smatthes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 08:51:21 by smatthes          #+#    #+#             */
/*   Updated: 2023/05/10 17:11:05 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_test.h"

int	main(void)
{
	char	*src;
	char	*ft_dest;
	int		libc_res;
	int		ft_res;
	int		strcmp_res;
	char	*test_case;

	src = malloc((sizeof *src) * 20);
	ft_dest = malloc((sizeof *ft_dest) * 20);
	test_case = "1";
	strcpy(src, test_case);
	ft_res = ft_strlcpy(ft_dest, src, 2);
	libc_res = 1;
	strcmp_res = strcmp(ft_dest, "1");
	compare_strs(libc_res, ft_res, strcmp_res, test_case);
	test_case = "12345";
	strcpy(src, test_case);
	ft_res = ft_strlcpy(ft_dest, src, 6);
	libc_res = 5;
	strcmp_res = strcmp(ft_dest, "12345");
	compare_strs(libc_res, ft_res, strcmp_res, test_case);
	test_case = "12345";
	strcpy(src, test_case);
	ft_res = ft_strlcpy(ft_dest, src, 3);
	libc_res = 5;
	strcmp_res = strcmp(ft_dest, "12");
	compare_strs(libc_res, ft_res, strcmp_res, test_case);
	test_case = "01234567890123456789012345";
	strcpy(src, test_case);
	ft_res = ft_strlcpy(ft_dest, src, 23);
	libc_res = 26;
	strcmp_res = strcmp(ft_dest, "0123456789012345678901");
	compare_strs(libc_res, ft_res, strcmp_res, test_case);
	test_case = "12345";
	strcpy(ft_dest, "aaa");
	strcpy(src, test_case);
	ft_res = ft_strlcpy(ft_dest, src, 0);
	libc_res = 5;
	strcmp_res = strcmp(ft_dest, "aaa");
	compare_strs(libc_res, ft_res, strcmp_res, "aaa");
	free(src);
	free(ft_dest);
}

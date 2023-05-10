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
	char	*src;
	char	*ft_dest;
	int		libc_res;
	int		ft_res;
	int		strcmp_res;
	char	*src_test_case;
	char	*dest_test_case;

	src = malloc((sizeof *src) * 20);
	ft_dest = malloc((sizeof *ft_dest) * 20);
	src_test_case = "aaaaa";
	dest_test_case = "12345";
	strcpy(src, src_test_case);
	strcpy(ft_dest, dest_test_case);
	ft_res = ft_strlcat(ft_dest, src, 7);
	libc_res = 10;
	strcmp_res = strcmp(ft_dest, "12345a");
	compare_strs(libc_res, ft_res, strcmp_res, "cat a");
	src_test_case = "aaaaa";
	dest_test_case = "12345";
	strcpy(src, src_test_case);
	strcpy(ft_dest, dest_test_case);
	ft_res = ft_strlcat(ft_dest, src, 2);
	libc_res = 10;
	strcmp_res = strcmp(ft_dest, "12345");
	compare_strs(libc_res, ft_res, strcmp_res, "size > dest_len + src_len");
	src_test_case = "aaaaa";
	dest_test_case = "12345";
	strcpy(src, src_test_case);
	strcpy(ft_dest, dest_test_case);
	ft_res = ft_strlcat(ft_dest, src, 15);
	libc_res = 10;
	strcmp_res = strcmp(ft_dest, "12345aaaaa");
	compare_strs(libc_res, ft_res, strcmp_res, "size > src_len");
	src_test_case = "aaaaa";
	dest_test_case = "01234567890123456789";
	strcpy(src, src_test_case);
	strcpy(ft_dest, dest_test_case);
	ft_res = ft_strlcat(ft_dest, src, 23);
	libc_res = 25;
	strcmp_res = strcmp(ft_dest, "01234567890123456789aa");
	compare_strs(libc_res, ft_res, strcmp_res, "dest memory to small");
	src_test_case = "aaaaa";
	dest_test_case = "0123456789";
	strcpy(src, src_test_case);
	strcpy(ft_dest, dest_test_case);
	ft_res = ft_strlcat(ft_dest, src, 2);
	libc_res = 7;
	strcmp_res = strcmp(ft_dest, "0123456789");
	compare_strs(libc_res, ft_res, strcmp_res, "size < dest len");
	free(src);
	free(ft_dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <smatthes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 10:05:52 by smatthes          #+#    #+#             */
/*   Updated: 2023/05/11 12:44:48 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_test.h"

int	main(void)
{
	char	*src;
	char	*ft_res_ptr;
	char	*libc_res_ptr;
	int		strcmp_res;

	src = "abcdefg";
	ft_res_ptr = NULL;
	ft_res_ptr = ft_strrchr(src, 'd');
	libc_res_ptr = strrchr(src, 'd');
	strcmp_res = (ft_res_ptr != libc_res_ptr) ? 1 : 0;
	compare_int_res_one_str(0, strcmp_res, src);
	src = "abcdefg";
	ft_res_ptr = ft_strrchr(src, 'z');
	libc_res_ptr = strrchr(src, 'z');
	printf("libc res = %s \n", libc_res_ptr);
	printf("ft res = %s \n", ft_res_ptr);
	strcmp_res = (ft_res_ptr != libc_res_ptr) ? 1 : 0;
	compare_int_res_one_str(0, strcmp_res, src);
	src = "abcdefg";
	ft_res_ptr = ft_strrchr(src, '\0');
	libc_res_ptr = strrchr(src, '\0');
	strcmp_res = (ft_res_ptr != libc_res_ptr) ? 1 : 0;
	printf("libc res = %s \n", libc_res_ptr);
	printf("ft res = %s \n", ft_res_ptr);
	compare_int_res_one_str(0, strcmp_res, src);
	src = "";
	ft_res_ptr = ft_strrchr(src, '\0');
	libc_res_ptr = strrchr(src, '\0');
	strcmp_res = (ft_res_ptr != libc_res_ptr) ? 1 : 0;
	printf("libc res = %s \n", libc_res_ptr);
	printf("ft res = %s \n", ft_res_ptr);
	compare_int_res_one_str(0, strcmp_res, src);
	src = "200";
	ft_res_ptr = ft_strrchr(src, 200);
	libc_res_ptr = strrchr(src, 200);
	strcmp_res = (ft_res_ptr != libc_res_ptr) ? 1 : 0;
	printf("libc res = %s \n", libc_res_ptr);
	printf("ft res = %s \n", ft_res_ptr);
	compare_int_res_one_str(0, strcmp_res, src);
	src = "-200";
	ft_res_ptr = ft_strrchr(src, -200);
	libc_res_ptr = strrchr(src, -200);
	strcmp_res = (ft_res_ptr != libc_res_ptr) ? 1 : 0;
	printf("libc res = %s \n", libc_res_ptr);
	printf("ft res = %s \n", ft_res_ptr);
	compare_int_res_one_str(0, strcmp_res, src);
}

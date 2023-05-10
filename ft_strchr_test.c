/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <smatthes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 10:05:52 by smatthes          #+#    #+#             */
/*   Updated: 2023/05/10 18:04:39 by smatthes         ###   ########.fr       */
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
	char	*src;
	char	*ft_res_ptr;
	char	*libc_res_ptr;
	int		strcmp_res;

	src = "abcdefg";
	ft_res_ptr = NULL;
	ft_res_ptr = ft_strchr(src, 'd');
	libc_res_ptr = strchr(src, 'd');
	strcmp_res = (ft_res_ptr != libc_res_ptr) ? 1 : 0;
	compare_int_res_one_str(0, strcmp_res, src);
	src = "abcdefg";
	ft_res_ptr = ft_strchr(src, 'z');
	libc_res_ptr = strchr(src, 'z');
	printf("libc res = %s \n", libc_res_ptr);
	printf("ft res = %s \n", ft_res_ptr);
	strcmp_res = (ft_res_ptr != libc_res_ptr) ? 1 : 0;
	compare_int_res_one_str(0, strcmp_res, src);
	src = "abcdefg";
	ft_res_ptr = ft_strchr(src, '\0');
	libc_res_ptr = strchr(src, '\0');
	strcmp_res = (ft_res_ptr != libc_res_ptr) ? 1 : 0;
		printf("libc res = %s \n", libc_res_ptr);
	printf("ft res = %s \n", ft_res_ptr);
compare_int_res_one_str(0, strcmp_res, src);
	src = "";
	ft_res_ptr = ft_strchr(src, '\0');
	libc_res_ptr = strchr(src, '\0');
	strcmp_res = (ft_res_ptr != libc_res_ptr) ? 1 : 0;
	printf("libc res = %s \n", libc_res_ptr);
	printf("ft res = %s \n", ft_res_ptr);
	compare_int_res_one_str(0, strcmp_res, src);
	src = "200";
	ft_res_ptr = ft_strchr(src, 200);
	libc_res_ptr = strchr(src, 200);
	strcmp_res = (ft_res_ptr != libc_res_ptr) ? 1 : 0;
	printf("libc res = %s \n", libc_res_ptr);
	printf("ft res = %s \n", ft_res_ptr);
	compare_int_res_one_str(0, strcmp_res, src);
	src = "-200";
	ft_res_ptr = ft_strchr(src, -200);
	libc_res_ptr = strchr(src, -200);
	strcmp_res = (ft_res_ptr != libc_res_ptr) ? 1 : 0;
	printf("libc res = %s \n", libc_res_ptr);
	printf("ft res = %s \n", ft_res_ptr);
	compare_int_res_one_str(0, strcmp_res, src);
}

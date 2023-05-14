/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatthes <smatthes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 10:05:53 by smatthes          #+#    #+#             */
/*   Updated: 2023/05/14 16:39:29 by smatthes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_test.h"

int	main(void)
{
	int num;

	num = INT_MIN;
	ft_putstr_fd("My num is: ", 1);
	ft_putnbr_fd(num, 1);
	ft_putstr_fd("\n", 1);
	printf("Should num is: %d\n\n", num);
	num = INT_MAX;
	ft_putstr_fd("My num is: ", 1);
	ft_putnbr_fd(num, 1);
	ft_putstr_fd("\n", 1);
	printf("Should num is: %d\n\n", num);
	num = 0;
	ft_putstr_fd("My num is: ", 1);
	ft_putnbr_fd(num, 1);
	ft_putstr_fd("\n", 1);
	printf("Should num is: %d\n\n", num);
	num = 100;
	ft_putstr_fd("My num is: ", 1);
	ft_putnbr_fd(num, 1);
	ft_putstr_fd("\n", 1);
	printf("Should num is: %d\n\n", num);
	num = -100;
	ft_putstr_fd("My num is: ", 1);
	ft_putnbr_fd(num, 1);
	ft_putstr_fd("\n", 1);
	printf("Should num is: %d\n\n", num);
}
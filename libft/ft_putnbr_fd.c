/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghaddad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 14:54:09 by ghaddad           #+#    #+#             */
/*   Updated: 2017/12/28 17:06:33 by ghaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int i;

	i = 1;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		i = -i;
	}
	while ((n / i) >= 10)
		i = 10 * i;
	while (i != 0)
	{
		ft_putchar_fd(n / i + 48, fd);
		n = n % i;
		i = i / 10;
	}
}
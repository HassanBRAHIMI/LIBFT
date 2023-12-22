/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrahimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 12:07:29 by hbrahimi          #+#    #+#             */
/*   Updated: 2023/12/15 17:54:45 by hbrahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	int	i;

	i = 0;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*zero_case(void)
{
	char	*str;

	str = ft_calloc(2, 1);
	if (!str)
		return (NULL);
	*str = '0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str_num;
	int		digits;
	long	num;

	num = n;
	digits = count_digits(n);
	if (num < 0)
	{
		digits += 1;
		num = -num;
	}
	if (num == 0)
		return (zero_case());
	str_num = ft_calloc(digits + 1, 1);
	if (!str_num)
		return (NULL);
	while (digits)
	{
		str_num[digits - 1] = num % 10 + '0';
		num = num / 10;
		digits--;
	}
	if (n < 0)
		str_num[digits] = '-';
	return (str_num);
}
/*#include <stdio.h>
int main()
{
	printf("%d\n",count_digits(123));
	printf("%s\n",ft_itoa(123));
}*/

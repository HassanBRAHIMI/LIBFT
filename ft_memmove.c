/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrahimi <hbrahimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:26:58 by hbrahimi          #+#    #+#             */
/*   Updated: 2023/12/21 17:44:10 by hbrahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!dst && !src)
		return (NULL);
	if (dst == src)
		return (dst);
	i = 0;
	if (src < dst)
	{
		while (i++ < len)
			((unsigned char *)dst)[len - i] = ((unsigned char *)src)[len - i];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dst);
}
/*int main()
{
	char dest[5] = "123";
	char src[5] = "abc";
	char kda[5] = "123";
	ft_memmove(&dest[2], src,2);
	printf("%s \n", dest);
	memmove(&kda[2], src, 2);
	printf("%s \n", kda);
}*/

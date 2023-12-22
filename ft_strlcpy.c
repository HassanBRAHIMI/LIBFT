/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrahimi <hbrahimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 21:13:21 by hbrahimi          #+#    #+#             */
/*   Updated: 2023/12/11 22:55:40 by hbrahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(src);
	if (dstsize <= 0)
		return (j);
	while (i + 1 < dstsize && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (j);
}
/*int main()
{
	char src[6] = "abcde";
	char smtg[6];
	char kda[6];
	printf("%lu, %s\n", ft_strlcpy(smtg,src,0),smtg);
	printf("%lu, %s\n", strlcpy(kda,src,0), kda);
}*/

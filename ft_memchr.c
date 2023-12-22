/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrahimi <hbrahimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:30:11 by hbrahimi          #+#    #+#             */
/*   Updated: 2023/12/21 17:55:55 by hbrahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <string.h>
//#include <stdio.h>
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	looking_for;
	unsigned char	*look;

	i = 0;
	look = (unsigned char *)s;
	looking_for = (unsigned char)c;
	while (i < n)
	{
		if (look[i] == looking_for)
			return (&look[i]);
		i++;
	}
	return (NULL);
}
/*int main()
{
	char *str = "abcd";
	printf("%p\n", ft_memchr(str,'\0',0));
	printf("%p\n", memchr(str,'\0', 0));
}*/

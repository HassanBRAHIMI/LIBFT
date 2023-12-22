/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrahimi <hbrahimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:47:55 by hbrahimi          #+#    #+#             */
/*   Updated: 2023/12/21 16:19:00 by hbrahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*kda;
	size_t			i;

	i = 0;
	kda = b;
	while (i < len)
	{
		kda[i] = (unsigned char)c;
		i++;
	}
	return (kda);
}
/*int main()
{
	char *str = NULL;
	printf("%s", ft_memset(str, 'b' ,2));
}*/

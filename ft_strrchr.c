/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrahimi <hbrahimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:46:42 by hbrahimi          #+#    #+#             */
/*   Updated: 2023/12/21 22:09:46 by hbrahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				len;
	unsigned char	sh;

	sh = c;
	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == sh)
			return (&((char *)s)[len]);
		len--;
	}
	return (NULL);
}
/*int main(void)
{
char *str = "abcdb";
	printf("%p\n", ft_strrchr(str,'b'));
	printf("%p\n", strrchr(str,'b'));	
}*/	

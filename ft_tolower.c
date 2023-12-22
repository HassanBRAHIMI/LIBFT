/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrahimi <hbrahimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:43:44 by hbrahimi          #+#    #+#             */
/*   Updated: 2023/12/06 12:50:51 by hbrahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>
int	ft_tolower(int c)
{
	if (c <= 90 && c >= 65)
		return (c + 32);
	return (c);
}
/*int main()
{
	printf("%c \n", ft_tolower('a'));
	printf("%c \n", ft_tolower('A'));
	printf("%c \n", tolower('a'));
	printf("%c \n", tolower('A'));
	printf("%c \n", ft_tolower('1'));
	printf("%d \n", tolower(1));
}*/

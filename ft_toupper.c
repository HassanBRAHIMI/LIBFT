/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrahimi <hbrahimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:25:36 by hbrahimi          #+#    #+#             */
/*   Updated: 2023/12/06 12:43:28 by hbrahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <ctype.h>
//#include <stdio.h>
int	ft_toupper(int c)
{
	if (c <= 122 && c >= 97)
		return (c - 32);
	return (c);
}
/*int main()
{
	printf("%c \n", ft_toupper('a'));
	printf("%c \n", ft_toupper('A'));
	printf("%c \n", toupper('a'));
	printf("%c \n", toupper('A'));
	printf("%c \n", ft_toupper('1'));
	printf("%d \n", toupper(1));
}*/

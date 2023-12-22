/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrahimi <hbrahimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 13:09:43 by hbrahimi          #+#    #+#             */
/*   Updated: 2023/12/04 13:28:49 by hbrahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_isalnum(int c)
{
	if ((c <= 57 && c >= 48) || (c <= 122 && c >= 97) || (c <= 90 && c >= 65))
		return (1);
	else
		return (0);
}
/*int main()
{
	printf("%d", ft_isalnum('1'));
	printf("%d", ft_isalnum('k'));
	printf("%d", ft_isalnum(' '));
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrahimi <hbrahimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 18:03:01 by hbrahimi          #+#    #+#             */
/*   Updated: 2023/12/21 17:52:13 by hbrahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*int main()
{
// Test case 1: Equal strings
    char str1[] = "Hello, World!";
    char str2[] = "Hello, World!";
    size_t n1 = strlen(str1);

    int result1 = ft_memcmp(str1, str2, n1);
    printf("Test case 1 result: %d\n", result1);

    // Test case 2: Different strings
    char str3[] = "Hello, World!";
    char str4[] = "Hello, Universe!";
    size_t n2 = strlen(str3);

    int result2 = ft_memcmp(str3, str4, n2);
    printf("Test case 2 result: %d\n", result2);

    // Test case 3: Compare only part of the strings
    char str5[] = "abcdef";
    char str6[] = "abcXYZ";
    size_t n3 = 3; // Compare only the first 3 characters

    int result3 = ft_memcmp(str5, str6, n3);
    printf("Test case 3 result: %d\n", result3);

    return 0;	
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrahimi <hbrahimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 22:22:41 by hbrahimi          #+#    #+#             */
/*   Updated: 2023/12/21 22:19:26 by hbrahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	k;
	size_t	dstlen;
	size_t	srclen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstlen < dstsize)
		k = dstlen + srclen;
	else
		k = dstsize + srclen;
	while (*src && (dstlen + 1) < dstsize)
	{
		*(dst + dstlen) = *src;
		dstlen++;
		src++;
	}
	*(dst + dstlen) = '\0';
	return (k);
}
/*int main()
{
 // Test Case 1: Destination buffer has enough space
    char dest1[20] = "Hello, ";
    char dest1_std[20] = "Hello, ";
    const char *src1 = "world!";
    size_t result1 = ft_strlcat(dest1, src1, sizeof(dest1));
    size_t result1_std = strlcat(dest1_std, src1, sizeof(dest1_std));
    printf("Test Case 1 Result (custom): %s\n", dest1);
    printf("Total length after concatenation (custom): %zu\n", result1);
    printf("Test Case 1 Result (standard): %s\n", dest1_std);
    printf("Total length after concatenation (standard): %zu\n\n", result1_std);

    // Test Case 2: Destination buffer is exactly the required size
    char dest2[12] = "Hello, ";
    char dest2_std[12] = "Hello, ";
    const char *src2 = "world!";
    size_t result2 = ft_strlcat(dest2, src2, sizeof(dest2));
    size_t result2_std = strlcat(dest2_std, src2, sizeof(dest2_std));
    printf("Test Case 2 Result (custom): %s\n", dest2);
    printf("Total length after concatenation (custom): %zu\n", result2);
    printf("Test Case 2 Result (standard): %s\n", dest2_std);
    printf("Total length after concatenation (standard): %zu\n\n", result2_std);

    // Test Case 3: Destination buffer is too small
    char dest3[10] = "Hello, ";
    char dest3_std[10] = "Hello, ";
    const char *src3 = "world!";
    size_t result3 = ft_strlcat(dest3, src3, sizeof(dest3));
    size_t result3_std = strlcat(dest3_std, src3, sizeof(dest3_std));
    printf("Test Case 3 Result (custom): %s\n", dest3);
    printf("Total length after concatenation (custom): %zu\n", result3);
    printf("Test Case 3 Result (standard): %s\n", dest3_std);
    printf("Total length after concatenation (standard): %zu\n\n", result3_std);

    // Test Case 4: Empty destination buffer
    char dest4[10] = "";
    char dest4_std[10] = "";
    const char *src4 = "world!";
    size_t result4 = ft_strlcat(dest4, src4, sizeof(dest4));
    size_t result4_std = strlcat(dest4_std, src4, sizeof(dest4_std));
    printf("Test Case 4 Result (custom): %s\n", dest4);
    printf("Total length after concatenation (custom): %zu\n", result4);
    printf("Test Case 4 Result (standard): %s\n", dest4_std);
    printf("Total length after concatenation (standard): %zu\n\n", result4_std);
		
}*/

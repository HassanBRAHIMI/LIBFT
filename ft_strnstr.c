/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrahimi <hbrahimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 12:39:00 by hbrahimi          #+#    #+#             */
/*   Updated: 2023/12/12 14:17:08 by hbrahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needlelen;

	needlelen = ft_strlen(needle);
	if (!*needle)
		return ((char *)haystack);
	while (*haystack && len >= needlelen)
	{
		if (!ft_strncmp(haystack, needle, needlelen))
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}

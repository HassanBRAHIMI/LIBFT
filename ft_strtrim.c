/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrahimi <hbrahimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 19:02:23 by hbrahimi          #+#    #+#             */
/*   Updated: 2023/12/22 10:31:33 by hbrahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	int		beginning;
	int		end;
	char	*trimmed;

	if (!s1 || !set)
		return (NULL);
	beginning = 0;
	end = ft_strlen(s1) - 1;
	if (end < 0)
		return (ft_strdup(""));
	while (s1[beginning] && ft_strchr(set, s1[beginning]))
		beginning++;
	while ((end > 0) && s1[end] && ft_strchr(set, s1[end]))
		end--;
	if (end - beginning < 0)
		return (ft_strdup(""));
	trimmed = ft_calloc(end - beginning + 2, 1);
	if (!trimmed)
		return (NULL);
	ft_strlcat(trimmed, s1 + beginning, end - beginning + 2);
	return (trimmed);
}

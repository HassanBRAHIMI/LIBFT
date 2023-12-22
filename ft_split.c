/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrahimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 10:58:29 by hbrahimi          #+#    #+#             */
/*   Updated: 2023/12/22 12:23:51 by hbrahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(char const *s1, char c)
{
	int	i;
	int	j;

	if (!s1)
		return (0);
	i = 0;
	j = 0;
	while (s1[i])
	{
		if (s1[i] == c && s1[i + 1] != c && s1[i + 1] != '\0')
			j++;
		i++;
	}
	if (s1[0] == c)
		j--;
	return (j + 1);
}

static char	**ft_free(char **splitted)
{
	int	c;

	c = 0;
	while (splitted[c])
	{
		free(splitted[c]);
		c++;
	}
	free(splitted);
	return (NULL);
}

static char	**ft_splitter(int count, int word_len, char *str, char c)
{
	char	**splitted;
	int		i;
	int		j;

	i = 0;
	j = 0;
	splitted = ft_calloc((count + 1), sizeof(char *));
	if (!splitted)
		return (NULL);
	while (i < count)
	{
		word_len = 0;
		while (str[j] && str[j] != c)
		{
			j++;
			word_len++;
		}
		splitted[i] = ft_substr(str, j - word_len, word_len);
		if (!splitted[i])
			return (ft_free(splitted));
		while (str[j] && str[j] == c)
			j++;
		i++;
	}
	return (splitted);
}

char	**ft_split(char const *s, char c)
{
	int		word_len;
	char	*str;	
	char	cc[2];
	char	**splitted;

	if (!s)
		return (NULL);
	if (ft_strlen(s) == 0)
	{
		splitted = ft_calloc(1, sizeof(char *));
		return (splitted);
	}
	word_len = 0;
	cc[0] = c;
	cc[1] = '\0';
	str = ft_strtrim(s, cc);
	if (!str)
		return (NULL);
	splitted = ft_splitter(ft_count(s, c), word_len, str, c);
	free(str);
	return (splitted);
}

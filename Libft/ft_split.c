/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfilipe- <pfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:32:30 by pfilipe-          #+#    #+#             */
/*   Updated: 2024/12/03 15:54:15 by pfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	str_count(const char *s, char c)
{
	size_t	i;
	size_t	num_str;

	num_str = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			num_str++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (num_str);
}

static size_t	len_str(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		num_str;
	int		i;
	int		len;

	if (!s)
		return (0);
	num_str = str_count(s, c);
	array = (char **)malloc((num_str + 1) * sizeof(char *));
	if (!array)
		return (0);
	i = 0;
	while (i < num_str)
	{
		while (*s == c)
			s++;
		len = len_str(s, c);
		array[i] = ft_substr(s, 0, len);
		s = s + len;
		i++;
	}
	array[num_str] = NULL;
	return (array);
}

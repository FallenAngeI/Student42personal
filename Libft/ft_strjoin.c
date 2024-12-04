/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfilipe- <pfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:19:20 by pfilipe-          #+#    #+#             */
/*   Updated: 2024/12/03 15:53:02 by pfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*resultstr;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (0);
	(resultstr = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!resultstr)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		resultstr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		resultstr[i] = s2[j];
		i++;
		j++;
	}
	resultstr[i] = '\0';
	return (resultstr);
}

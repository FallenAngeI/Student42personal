/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfilipe- <pfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:29:45 by pfilipe-          #+#    #+#             */
/*   Updated: 2024/11/06 15:29:49 by pfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	length_dst;
	size_t	length_src;

	length_dst = ft_strlen(dst);
	length_src = ft_strlen(src);
	if (length_dst < size - 1 && size > 0)
	{
		i = 0;
		j = length_dst;
		while (src[i] && i < size - length_dst - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = '\0';
	}
	if (length_dst > size)
		length_dst = size;
	return (length_dst + length_src);
}

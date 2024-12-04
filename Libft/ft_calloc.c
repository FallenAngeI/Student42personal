/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfilipe- <pfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 19:14:41 by pfilipe-          #+#    #+#             */
/*   Updated: 2024/12/03 15:51:33 by pfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void					*ptr;
	long long unsigned int	result;

	ptr = NULL;
	result = nmemb * size;
	if (nmemb != 0 && result / nmemb != size)
		return (NULL);
	ptr = malloc(result);
	if (ptr == NULL)
		return (ptr);
	ft_bzero(ptr, result);
	return (ptr);
}

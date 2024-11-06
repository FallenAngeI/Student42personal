/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfilipe- <pfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:19:20 by pfilipe-          #+#    #+#             */
/*   Updated: 2024/11/06 15:52:25 by pfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ptr;
	int		i;
	int		j;
	int		c;

	ptr = malloc(sizeof(strs));
	i = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			ptr[c++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
		{
			ptr[c++] = sep[j++];
		}
		i++;
	}
	ptr[c] = '\0';
	return (ptr);
}

/*#include <stdio.h>
int main() {
	char *strs[] = {"Codigo","funcione","pfv","obg"};
	char sep[] = ", ";
	int size = 3;
	char *result = ft_strjoin(size, strs, sep);
	if (result != NULL) {
		printf("Resultado:%s\n", result);
		free(result);
	}
	return (0);
}*/
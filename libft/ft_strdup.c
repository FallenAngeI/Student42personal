/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfilipe- <pfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:59:00 by pfilipe-          #+#    #+#             */
/*   Updated: 2024/09/26 15:44:22 by pfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		x;
	int		i;

	i = 0;
	x = 0;
	while (src[x] != '\0')
		x++;
	dest = (char *)malloc(sizeof(char) * (x + 1));
	if (!dest)
		return (NULL);
	while (i < x)
	{
		dest[i] = src[i];
		i++;
	}
	dest[x] = '\0';
	return (dest);
}
/*int main() {
    char *duplicate = ft_strdup("Hello, World!");
    printf("%s\n", duplicate);
    free(duplicate);  // Libera a memória alocada
    return 0;
}*/
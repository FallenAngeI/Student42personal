/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfilipe- <pfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:53:43 by pfilipe-          #+#    #+#             */
/*   Updated: 2024/09/18 14:53:43 by pfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	sign;
	int	sum;

	sign = 1;
	sum = 0;
	while (*str == ' ' || *str == '\t' || *str == '\r' || *str == '\n')
	{
		str++;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			sign = sign * (-1);
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		sum = sum * 10 + *str - '0';
		str++;
	}
	return (sign * sum);
}

/*#include <stdio.h>
int	main()
{
	char	*string = "   -----+--+1235bd67";
	printf("%d\n", ft_atoi(string));
}*/

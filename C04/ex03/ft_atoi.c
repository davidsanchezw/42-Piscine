/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanch2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 12:52:46 by dasanch2          #+#    #+#             */
/*   Updated: 2022/06/02 10:53:50 by dasanch2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	n;
	int	res;

	i = 0;
	res = 0;
	n = 1;
	while (((str[i] >= 9) && (str[i] < 14)) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			n = n * -1;
		++i;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		res = (res * 10) + (str[i] - '0');
		++i;
	}
	return (res * n);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	char	str[] = "  -+-1234ab567";

	printf("%d\n", ft_atoi(str));
	printf("%d", atoi(" -1234ab567"));
	return (0);
}
*/

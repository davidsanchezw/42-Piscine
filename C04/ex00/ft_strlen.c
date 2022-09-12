/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanch2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 12:51:48 by dasanch2          #+#    #+#             */
/*   Updated: 2022/05/31 13:14:15 by dasanch2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size] != 0)
		size++;
	return (size);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "123456789";

	printf("%d", ft_strlen(str));
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanch2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 15:59:03 by dasanch2          #+#    #+#             */
/*   Updated: 2022/05/26 16:13:24 by dasanch2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	char	c;
	int		i;

	i = 0;
	if (*str == '\0')
		return (1);
	while (*(str + i) != '\0')
	{
		c = *(str + i);
		i++;
		if (c < 65 || c > 90)
		{
			return (0);
		}
	}
	return (1);
}

/*
#include <stdio.h>
int	main(void)
{
	char test1[20] = "PRUEBA";	
	char test2[20] = "";
	char test3[20] = "pruebaA";

	printf("Test 1 upper_case: %d\n", ft_str_is_uppercase(test1));
    printf("Test 2 vacío: %d\n", ft_str_is_uppercase(test2));
    printf("Test 3 low_case: %d\n", ft_str_is_uppercase(test3));

	return (0);
}
*/

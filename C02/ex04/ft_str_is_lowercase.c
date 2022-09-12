/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanch2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 15:53:58 by dasanch2          #+#    #+#             */
/*   Updated: 2022/05/26 15:58:16 by dasanch2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
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
		if (c < 97 || c > 122)
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
	char test1[20] = "prueba";	
	char test2[20] = "";
	char test3[20] = "pruebaA";

	printf("Test 1 low_case: %d\n", ft_str_is_lowercase(test1));
    printf("Test 2 vacío: %d\n", ft_str_is_lowercase(test2));
    printf("Test 3 up_case: %d\n", ft_str_is_lowercase(test3));

	return (0);
}
*/

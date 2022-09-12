/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanch2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 15:48:49 by dasanch2          #+#    #+#             */
/*   Updated: 2022/05/26 15:53:28 by dasanch2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
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
		if (c < 48 || c > 57)
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
	char test1[20] = "123456";	
	char test2[20] = "";
	char test3[20] = "prueba3";

	printf("Test 1 numeros: %d\n", ft_str_is_numeric(test1));
    printf("Test 2 vacío: %d\n", ft_str_is_numeric(test2));
    printf("Test 3 letras: %d\n", ft_str_is_numeric(test3));

	return (0);
}
*/

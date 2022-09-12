/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanch2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:37:34 by dasanch2          #+#    #+#             */
/*   Updated: 2022/05/26 16:51:41 by dasanch2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	c;
	int		i;

	i = 0;
	while (*(str + i) != '\0')
	{
		c = *(str + i);
		if (c >= 65 && c <= 90)
		{
			*(str + i) += 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char test1[20] = "PRUEBA";	
	char test2[20] = "";
	char test3[20] = "prUueba3";

	printf("Test 1 letras: %s\n", ft_strlowcase(test1));
    printf("Test 2 vacío: %s\n", ft_strlowcase(test2));
    printf("Test 3 numero: %s\n", ft_strlowcase(test3));

	return (0);
}
*/

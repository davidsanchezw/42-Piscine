/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanch2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 15:21:30 by dasanch2          #+#    #+#             */
/*   Updated: 2022/05/26 18:35:21 by dasanch2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
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
		if (c < 65 || (c > 90 && c < 97) || c > 122)
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
	char test1[20] = "Prueba";	
	char test2[20] = "";
	char test3[20] = "prueba3";

	printf("Test 1 letras: %d\n", ft_str_is_alpha(test1));
    printf("Test 2 vacío: %d\n", ft_str_is_alpha(test2));
    printf("Test 3 numero: %d\n", ft_str_is_alpha(test3));

	return (0);
}
*/

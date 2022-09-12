/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanch2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:52:12 by dasanch2          #+#    #+#             */
/*   Updated: 2022/05/26 16:56:00 by dasanch2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	c;
	int		i;

	i = 0;
	while (*(str + i) != '\0')
	{
		c = *(str + i);
		if (c >= 97 && c <= 122)
		{
			*(str + i) -= 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char test1[20] = "prueba";	
	char test2[20] = "";
	char test3[20] = "prUueBa3";

	printf("Test 1 letras: %s\n", ft_strupcase(test1));
    printf("Test 2 vacío: %s\n", ft_strupcase(test2));
    printf("Test 3 numero: %s\n", ft_strupcase(test3));

	return (0);
}
*/

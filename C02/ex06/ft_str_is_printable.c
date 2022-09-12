/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanch2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:13:35 by dasanch2          #+#    #+#             */
/*   Updated: 2022/05/26 16:36:40 by dasanch2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
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
		if (c < 32 || c > 126)
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
	char test1[20] = "PRUEBA!";	
	char test2[20] = "";
	char test3[20] = {127};

	printf("Test 1 printable: %d\n", ft_str_is_printable(test1));
    printf("Test 2 vacío: %d\n", ft_str_is_printable(test2));
    printf("Test 3 non printable: %d\n", ft_str_is_printable(test3));

	return (0);
}
*/

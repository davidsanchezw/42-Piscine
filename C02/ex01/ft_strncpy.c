/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanch2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 13:46:29 by dasanch2          #+#    #+#             */
/*   Updated: 2022/05/26 18:26:48 by dasanch2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (*(src + i) != 0 && i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = 0;
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char src1[20] = "Prueba 1";
	char dest1[20] = {};
	char src2[20] = "Prueba 2";
	char dest2[20] = "Hola";

	printf("Destino 1 antes: %s\n", dest1);
	char *out1 = strncpy(dest1, src1, 3);
	printf("Destino 1 después: %s\n", dest1);
	printf("Salida: %s\n", out1);

	printf("Destino 2 antes: %s\n", dest2);
	char *out2 = ft_strncpy(dest2, src2, 3);
	printf("Destino 2 después: %s\n", dest2);
	printf("Salida: %s\n", out2);

	return (0);
}
*/

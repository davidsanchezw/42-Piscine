/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanch2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 12:10:31 by dasanch2          #+#    #+#             */
/*   Updated: 2022/05/26 15:20:52 by dasanch2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	n;

	n = 0;
	while (*(src + n) != 0)
	{
		*(dest + n) = *(src + n);
		n++;
	}
	dest[n] = 0;
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
	char *out1 = ft_strcpy(dest1, src1);
	printf("Destino 1 después: %s\n", dest1);
	printf("Salida: %s\n", out1);

	printf("Destino 2 antes: %s\n", dest2);
	char *out2 = strcpy(dest2, src2);
	printf("Destino 2 después: %s\n", dest2);
	printf("Salida: %s\n", out2);

	return (0);
}
*/

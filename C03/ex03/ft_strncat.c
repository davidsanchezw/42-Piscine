/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanch2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 12:19:44 by dasanch2          #+#    #+#             */
/*   Updated: 2022/05/28 16:49:25 by dasanch2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*start;

	start = dest;
	while (*dest != '\0')
	{
	dest++;
	}
	while (*src != '\0' && nb > 0)
	{
		*dest = *src;
		dest++;
		src++;
		nb--;
	}
	*dest = '\0';
	dest = start;
	return (start);
}

/*
#include <string.h>
#include <stdio.h>
int main()
{
	char s1[20] = "Primero_";
	char s2[20] = "segundo";	
    char s3[20] = "Primero_";
	char s4[20] = "segundo";

    printf("Test antes: %s y %s\n", s1, s2);
    strncat(s1, s2, 5);
	printf("Test strncat: %s y %s\n", s1, s2);
    ft_strncat(s3, s4, 5);
	printf("Test ft_strncat: %s y %s\n", s3, s4);
	return 0;
}
*/

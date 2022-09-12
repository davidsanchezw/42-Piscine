/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanch2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 12:21:26 by dasanch2          #+#    #+#             */
/*   Updated: 2022/05/28 16:47:02 by dasanch2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*start;

	start = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	dest = start;
	return (start);
}

/*
#include <string.h>
//#include <stdio.h>
int main()
{
	char s1[20] = "Primero_";
	char s2[20] = "segundo";	
    char s3[20] = "Primero_";
	char s4[20] = "segundo";

    printf("Test strncat: %s y %s\n", s1, s2);
    strcat(s1, s2);
	printf("Test strcat: %s y %s\n", s1, s2);
    ft_strcat(s3, s4);
	printf("Test ft_strcat: %s y %s\n", s3, s4);
	return 0;
}
*/

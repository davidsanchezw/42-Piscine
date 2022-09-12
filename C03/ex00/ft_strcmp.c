/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanch2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 18:09:08 by dasanch2          #+#    #+#             */
/*   Updated: 2022/05/26 19:36:53 by dasanch2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	char	c1;
	char	c2;

	c1 = *s1;
	c2 = *s2;
	while (c1 == c2)
	{
		c1 = *s1++;
		c2 = *s2++;
		if (c1 == '\0')
			return (c1 - c2);
	}
	return (c1 - c2);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	char s1[] = "hola";
	char s2[] = "hola";	
    char s3[] = "hola";
	char s4[] = "adios";

	printf("Test 1: %i y %i\n", ft_strcmp(s1, s2), strcmp(s1, s2));
	printf("Test 2: %i y %i\n", ft_strcmp(s3, s4), strcmp(s3, s4));
	return 0;
}
*/

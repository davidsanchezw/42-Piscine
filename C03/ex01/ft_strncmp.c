/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanch2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 19:37:48 by dasanch2          #+#    #+#             */
/*   Updated: 2022/05/31 18:06:20 by dasanch2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (i < n) && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	if (i != n)
		return (s1[i] - s2[i]);
	else
		return (0);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	char s1[] = "hola";
	char s2[] = "hola";	
    char s3[] = "hoas";
	char s4[] = "hola";

	printf("Test 1: %i y %i\n", ft_strncmp(s1, s2, 7), strncmp(s1, s2, 7));
	printf("Test 2: %i y %i\n", ft_strncmp(s3, s4, 3), strncmp(s3, s4, 3));
	return 0;
}
*/

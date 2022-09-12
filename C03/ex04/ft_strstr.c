/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanch2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 13:45:52 by dasanch2          #+#    #+#             */
/*   Updated: 2022/05/28 16:40:49 by dasanch2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	char	*p;

	i = 0;
	if (to_find[i] == 0)
		return (str);
	while (*str != 0)
	{
		p = str;
		while (*str == to_find[i] && to_find[i] != 0)
		{
			i++;
			str++;
		}
		if (to_find[i] == 0)
			return (p);
		else
		i = 0;
		str = p;
		str++;
	}
	return (0);
}
/*
#include <string.h>
int main()
{
	char s1[] = "....hola";
	char s2[] = "hol";	
    char s3[] = "....hola";
	char s4[] = "holi";

	printf("Test 1 original: %s\n", strstr(s1, s2));
	printf("Test 2 original: %s\n", strstr(s3, s4));	
	printf("Test 1: %s\n", ft_strstr(s1, s2));
	printf("Test 2: %s\n", ft_strstr(s3, s4));
	return 0;
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanch2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 14:07:32 by dasanch2          #+#    #+#             */
/*   Updated: 2022/06/02 18:52:05 by dasanch2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		write(1, &str[i], 1);
		i++;
	}
}

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

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*aux;

	i = 1;
	while (i < argc)
	{
		j = i;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
			aux = argv[i];
			argv[i] = argv[j];
			argv[j] = aux;
			}
		j++;
		}
		ft_putstr(argv[i++]);
		write(1, "\n", 1);
	}
	return (0);
}

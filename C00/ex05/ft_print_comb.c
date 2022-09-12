/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanch2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 19:51:06 by dasanch2          #+#    #+#             */
/*   Updated: 2022/05/18 17:48:27 by dasanch2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_three(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = '0';
	y = '1';
	z = '2';
	while (x <= '7')
	{
		while (y <= '8')
		{
			while (z <= '9')
			{
				ft_putchar_three(x, y, z);
				if (x < '7')
					write(1, ", ", 2);
				z++;
			}
			z = ++y + 1;
		}
		y = x + 1;
		x++;
	}
}

/*
int main()
{
	ft_print_comb();
	return 0;
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanch2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 12:56:51 by dasanch2          #+#    #+#             */
/*   Updated: 2022/05/24 13:39:44 by dasanch2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
#include <stdio.h>
int main()
{
	int a1 = 4;
	int b1 = 2;
	int a2 = 11;
	int b2 = 4;
	int div = 0;
	int mod = 0;

	ft_div_mod(a1, b1, &div, &mod);
	printf("%d / %d = %d\n", a1, b1, div);
	printf("%d mod %d = %d\n\n", a1, b1, mod);

	ft_div_mod(a2, b2, &div, &mod);
	printf("%d / %d = %d\n", a2, b2, div);
	printf("%d mod %d = %d\n\n", a2, b2, mod);
    return 0;

}
*/

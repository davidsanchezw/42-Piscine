/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanch2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 13:40:24 by dasanch2          #+#    #+#             */
/*   Updated: 2022/05/24 14:02:53 by dasanch2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{	
	int	aux;
	int	aux2;

	if (b != 0)
	{
		aux = *a / *b;
		aux2 = *a % *b;
		*a = aux;
		*b = aux2;
	}
}
/*
#include <stdio.h>
int main()
{

    int a1 = 15;
    int b1 = 3;
    int a2 = 11;
    int b2 = 4;


    printf("Antes:\n\ta = %d\n\tb = %d\n", a1, b1);
    ft_ultimate_div_mod(&a1, &b1);
    printf("Despues: a / b = %d, a %c b = %d\n", a1, 37, b1);

    printf("Antes:\n\ta = %d\n\tb = %d\n", a2, b2);
    ft_ultimate_div_mod(&a2, &b2);
    printf("Despues: a / b = %d, a %c b = %d\n", a2, 37, b2);
    return 0;
}
*/

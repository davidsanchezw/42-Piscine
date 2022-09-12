/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanch2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 12:52:47 by dasanch2          #+#    #+#             */
/*   Updated: 2022/05/24 12:56:41 by dasanch2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
/*
#include <stdio.h>
int main()
{
	int a = 1;
	int b = 2;
	printf("Antes:\n\ta = %d \n\tb = %d\n", a, b);
	ft_swap(&a, &b);
	printf("Después:\n\ta = %d \n\tb = %d", a, b);
	return (0);
}
*/

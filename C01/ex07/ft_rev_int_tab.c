/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanch2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 17:28:48 by dasanch2          #+#    #+#             */
/*   Updated: 2022/05/24 19:00:35 by dasanch2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;
	int	i;

	i = 0;
	while (i < --size)
	{
		aux = tab[i];
		tab[i] = tab[size];
		tab[size] = aux;
		i++;
	}
}
/*
#include <stdio.h>
int main()
{
	int i = 0;
	int numbers[] = {8, 7, 6, 5, 4, 3, 2, 1};
	ft_rev_int_tab(numbers, 8);
	while (i < 8)
	{
		printf("%d ", numbers[i++]);
	}
    return 0;
}
*/

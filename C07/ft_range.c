/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbamou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 09:25:22 by mbamou            #+#    #+#             */
/*   Updated: 2021/10/11 20:39:53 by mbamou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<stdlib.h>
int	*ft_range(int min, int max)
{
	int array[];
	int i;

	array = (int*) malloc(int * max + 1);
	i = 0;
	if(min < max)
	{
		while (array[i] >=  min && array[i] < max)
			array[i] = min + i;
			i++;
		return (array);
	}
	return (0);
}

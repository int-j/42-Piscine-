/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbamou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:07:59 by mbamou            #+#    #+#             */
/*   Updated: 2021/10/12 12:06:05 by mbamou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
int ft_ultimate_range(int **range, int min, int max)
{
	int *array;
	int i;
	
	if(array == NULL)
		return(-1);
	if(min < max)
	{
		array = (int*)malloc(sizeof (array) * (max - min));
		while(i < max)
		{
			array[i] = min + i;
			*range = array;
			i++;
		}
		return (*range);
	}
	array[i] == '\0';
	return (NULL);
}

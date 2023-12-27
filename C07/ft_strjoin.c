/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbamou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 10:15:15 by mbamou            #+#    #+#             */
/*   Updated: 2021/10/12 12:00:40 by mbamou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
#include<stdio.h>
char *ft_strjoin(int size, char **strs, char *sep)
{
	char *array;
	int w;
	int c;
	int k;
	

	array = (char *)malloc(sizeof(array) * size);
	w = 1;
	k = 0;
	while(w < size)
	{
		c = 0;
		while(strs[w][c] != '\0')
			array[k++] = strs[w][c++];
		c = 0;
		while(sep[c] != '\0' && w != size - 1)
			array[k++] = sep[c++];
		w++;
	}
	array[k] = '\0';
	return(array);
}

int main(int ac, char **av)
{
	printf("%s\n", ft_strjoin(ac, av, ", "));
}


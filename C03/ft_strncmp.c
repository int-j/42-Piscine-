/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbamou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:34:55 by mbamou            #+#    #+#             */
/*   Updated: 2021/10/04 21:22:40 by mbamou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] && s2[i]) && i < n - 1 && s1[i] == s2[i])
	{
		i++;
	}
	return ((unsigned char )s1[i] - (unsigned char)s2[i]);
}

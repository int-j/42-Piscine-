/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbamou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 15:30:22 by mbamou            #+#    #+#             */
/*   Updated: 2021/09/27 16:09:31 by mbamou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
void	ft_div_mod(int a, int b, int *div, int *mod)

{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

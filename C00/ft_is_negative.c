/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbamou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 12:31:05 by mbamou            #+#    #+#             */
/*   Updated: 2021/09/26 12:48:28 by mbamou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
void	ft_putchar(char c)

{
	write(1, &c, 1);
}

void	ft_is_negative(int n)

{
	if (n >= 0)
		ft_putchar('P');
	else
		ft_putchar('N');
}

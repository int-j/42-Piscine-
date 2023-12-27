/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbamou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:38:14 by mbamou            #+#    #+#             */
/*   Updated: 2021/10/06 15:07:59 by mbamou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fact;

	fact = 1;
	i = 1;
	while (i <= nb)
	{
		fact *= i;
		i++;
	}
	return (fact);
}

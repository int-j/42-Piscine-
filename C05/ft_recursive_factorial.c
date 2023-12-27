/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbamou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 19:59:49 by mbamou            #+#    #+#             */
/*   Updated: 2021/10/06 15:09:47 by mbamou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_factorial(int nb)
{
	int	i;
	int	fact;

	i = 1;
	fact = 1;
	while (i <= nb)
	{
		fact = nb * ft_recursive_factorial(nb - 1);
		i++;
	}
	return (fact);
}

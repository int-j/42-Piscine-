/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbamou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 09:33:50 by mbamou            #+#    #+#             */
/*   Updated: 2021/10/06 16:03:42 by mbamou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_power(int nb, int power)
{
	int	i;
	int	po;

	i = 0;
	po = 1;
	if (nb == 0 && power == 0)
		return (1);
	while (i < power)
	{
		po = nb * ft_recursive_power(nb, power - 1);
		i++;
	}
	return (po);
}

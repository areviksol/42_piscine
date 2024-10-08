/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aremkrtc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 18:56:26 by aremkrtc          #+#    #+#             */
/*   Updated: 2021/09/22 13:55:50 by aremkrtc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	a;

	a = nb;
	if (a > a * nb)
	{
		return (0);
	}
	else if (power > 1)
	{
		return (a * ft_recursive_power(a, power - 1));
	}
	else if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
		return (a);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aremkrtc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 13:56:36 by aremkrtc          #+#    #+#             */
/*   Updated: 2021/09/12 14:37:14 by aremkrtc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char s);

void	rush(int x, int y)
{
	int	t;
	int	s;

	t = 1;
	while (t <= y)
	{
		s = 1;
		while (s <= x)
		{
			if ((t == 1 && s == 1) || (t == y && s == 1))
				ft_putchar('A');
			else if ((t == 1 && s == x) || (t == y && s == x))
				ft_putchar('C');
			else if (t == 1 || t == y || s == 1 || s == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
			s++;
		}
		ft_putchar('\n');
		t++;
	}
}

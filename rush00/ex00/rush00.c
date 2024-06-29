/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aremkrtc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 13:55:35 by aremkrtc          #+#    #+#             */
/*   Updated: 2021/09/12 14:33:04 by aremkrtc         ###   ########.fr       */
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
			if ((t == 1 && s == 1) || (t == y && s == x))
				ft_putchar('o');
			else if ((t == y && s == 1) || (t == 1 && s == x))
				ft_putchar('o');
			else if (s == 1 || s == x)
				ft_putchar('|');
			else if (t == 1 || t == y)
				ft_putchar('-');
			else
				ft_putchar(' ');
			s++;
		}
		ft_putchar('\n');
		t++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aremkrtc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 15:09:58 by aremkrtc          #+#    #+#             */
/*   Updated: 2021/09/12 15:15:44 by aremkrtc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char s);

void	rush(int x, int y)
{
	int	i;
	int	j;

	j = 0;
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			if ((i == 0 && j == 0)
				|| (i == x - 1 && j == y - 1 && y != 1 && x != 1))
				ft_putchar('/');
			else if ((i == 0 && j == y - 1) || (i == x - 1 && j == 0))
				ft_putchar('\\');
			else if ((j == 0 || j == y - 1) || (i == 0 || i == x - 1))
				ft_putchar('*');
			else
				ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}

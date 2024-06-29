/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rshbas.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmalkhas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 19:19:15 by lmalkhas          #+#    #+#             */
/*   Updated: 2021/09/26 19:19:17 by lmalkhas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		ft_putchar(str[c]);
		c++;
	}
}

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
		c++;
	return (c);
}

int	ft_atoi_uni(char nbr)
{
	int	n;

	n = nbr - ('0');
	return (n);
}

int	ft_msg_error(void)
{
	ft_putstr("Error");
	return (0);
}

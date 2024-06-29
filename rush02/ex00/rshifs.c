/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rshifs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmalkhas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 19:20:11 by lmalkhas          #+#    #+#             */
/*   Updated: 2021/09/26 19:20:13 by lmalkhas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_if_uni(char dig, char *dict, int d)
{
	if (dict[d] == dig && !(dict[d + 1] >= '0' && dict[d + 1] <= '9')
		&& !(dict[d - 1] >= '0' && dict[d - 1] <= '9'))
		return (1);
	else
		return (0);
}

int	ft_if_dez(char dig, char *dict, int d)
{
	if (dict[d] == dig && (dict[d + 1] == '0')
		&& !(dict[d + 2] >= '0' && dict[d + 2] <= '9')
		&& !(dict[d - 1] >= '0' && dict[d - 1] <= '9'))
		return (1);
	else
		return (0);
}

int	ft_if_teens(char dig, char *dict, int d)
{
	if ((dict[d] == dig && dict[d] == '1')
		&& (dict[d + 1] >= '0' && dict[d + 1] <= '9')
		&& !(dict[d + 2] >= '0' && dict[d + 2] <= '9')
		&& !(dict[d - 1] >= '0' && dict[d - 1] <= '9'))
		return (1);
	else
		return (0);
}

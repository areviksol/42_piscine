/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aremkrtc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 17:24:22 by aremkrtc          #+#    #+#             */
/*   Updated: 2021/09/27 16:47:40 by aremkrtc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	r;
	int	i;
	int	*b;

	if (min >= max)
		return (0);
	r = max - min - 1;
	b = malloc(r * sizeof(int));
	if (b == NULL)
		return (0);
	i = 0;
	while (i <= r)
	{
		b[i] = min + i;
		i++;
	}
	return (b);
}

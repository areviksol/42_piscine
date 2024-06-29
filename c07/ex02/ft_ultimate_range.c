/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aremkrtc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 11:57:15 by aremkrtc          #+#    #+#             */
/*   Updated: 2021/09/27 16:49:25 by aremkrtc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	bound;
	int	i;
	int	*buffer;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	bound = max - min - 1;
	buffer = malloc(bound * sizeof(int));
	if (buffer == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = buffer;
	i = 0;
	while (i <= bound)
	{
		buffer[i] = min + i;
		i++;
	}
	return (bound + 1);
}

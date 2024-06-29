/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aremkrtc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 12:00:35 by aremkrtc          #+#    #+#             */
/*   Updated: 2021/09/27 12:20:15 by aremkrtc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*st;
	int		i;
	int		j;
	int		a;

	st = malloc(sizeof(strs));
	i = 0;
	a = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			st[a++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
		{
			st[a++] = sep[j++];
		}
		i++;
	}
	st[a] = '\0';
	return (st);
}

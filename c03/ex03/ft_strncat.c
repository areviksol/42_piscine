/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aremkrtc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 12:51:31 by aremkrtc          #+#    #+#             */
/*   Updated: 2021/09/18 14:35:22 by aremkrtc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*charptrdest;
	char			*charptrsrc;
	unsigned int	i;

	i = 0;
	charptrdest = dest;
	charptrsrc = src;
	while (*charptrdest)
		charptrdest++;
	while (i < nb && *charptrsrc)
	{
		*charptrdest = *charptrsrc;
		charptrsrc++;
		charptrdest++;
		i++;
	}
	*charptrdest = 0;
	return (dest);
}

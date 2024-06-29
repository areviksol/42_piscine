/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aremkrtc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 16:34:15 by aremkrtc          #+#    #+#             */
/*   Updated: 2021/09/15 16:25:33 by aremkrtc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	is_printable;
	int	i;

	is_printable = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] > 31 && str[i] <= 127))
		{
			is_printable = 0;
		}
		i++;
	}
	return (is_printable);
}

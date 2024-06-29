/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aremkrtc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 13:47:09 by aremkrtc          #+#    #+#             */
/*   Updated: 2021/09/23 13:47:17 by aremkrtc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_swap(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}

void	ft_str_sort(char **arr, int size, int o)
{
	int		index;
	bool	swapped;

	index = o;
	while (true)
	{
		index = o;
		swapped = false;
		while (index < size)
		{
			if (ft_strcmp(arr[index], arr[index + 1]) > 0)
			{
				ft_swap(&arr[index], &arr[index + 1]);
				swapped = true;
			}
			index++;
		}
		if (!swapped)
			break ;
	}
}

int	main(int argc, char **argv)
{
	int	index;

	if (argc > 2)
		ft_str_sort(argv, argc - 1, 1);
	index = 0;
	while (++index < argc)
	{
		ft_putstr(argv[index]);
		ft_putstr("\n");
	}
}

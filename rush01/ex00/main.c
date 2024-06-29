/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aremkrtc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 17:39:57 by aremkrtc          #+#    #+#             */
/*   Updated: 2021/09/19 18:42:25 by aremkrtc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		zeroboard(int *input);

int	checkarg(char *input)
{
	int	i;
	int	err;

	i = 0;
	err = 0;
	while (input[i])
	{
		if (input[i] == '4')
			err++;
		i++;
	}
	if (err > 2)
		return (0);
	i = 0;
	err = 0;
	while (input[i])
	{
		if (input[i] == '1')
			err++;
		i++;
	}
	if (err != 4)
		return (0);
	return (1);
}

int	inputvalid(char *arg, int *input)
{
	int	i;
	int	out;

	i = 0;
	out = 0;
	if (checkarg(arg) == 1)
	{
		while (arg[i])
		{
			if ((arg[i] >= '1' && arg[i] <= '4') && ((arg[i + 1] == ' ')
					|| ((arg[i + 1] == 0) && (arg[i - 1] == ' '))))
			{
				input[out] = (arg[i] - '0');
				out++;
				i++;
			}
			if ((arg[i] >= 9 && arg[i] <= 13) || arg[i] == 32)
				i++;
			else
				return (out);
		}
		input[out] = '\0';
		return (out);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	input[16];

	if (argc == 2)
	{
		if (inputvalid(argv[1], input) == 16)
			zeroboard(input);
		else
			write(1, "Error\n", 6);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}

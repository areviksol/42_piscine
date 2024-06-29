/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmalkhas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 19:18:54 by lmalkhas          #+#    #+#             */
/*   Updated: 2021/09/26 19:18:59 by lmalkhas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*filename;
	char	*dict;
	char	*nbr;

	filename = 0;
	dict = 0;
	nbr = 0;
	if (ft_ver_cond(argc, argv) >= 1)
	{
		filename = ft_dict_file(argc, argv);
		dict = ft_read_dict(filename);
		ft_get_nbr(argc, argv, &nbr);
		ft_write_nbr(nbr, dict);
		ft_free(filename, dict, nbr);
	}
	else
		ft_msg_error();
	write(1, "\n", 1);
	return (0);
}

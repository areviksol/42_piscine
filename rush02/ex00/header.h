/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmalkhas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 19:18:32 by lmalkhas          #+#    #+#             */
/*   Updated: 2021/09/26 19:18:38 by lmalkhas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_atoi_uni(char nbr);
int		ft_msg_error(void);

int		ft_ver_cond(int argc, char **argv);
int		ft_ver_nbr(char *argv);
int		ft_ver_dict(char *argv);
void	ft_get_nbr(int argc, char **argv, char **nbr);
void	ft_free(char *filename, char *dict, char *nbr);

char	*ft_dict_file(int argc, char **argv);
char	*ft_read_dict(char *filename);
void	ft_write_nbr(char *nbr, char *dict);
void	ft_write_trio(char *nbr, int len, char *dict);

void	ft_write_uni(char dig, char *dict);
void	ft_write_dez(char dig, char *dict);
void	ft_write_teens(char dig, char *dict);

int		ft_if_uni(char dig, char *dict, int d);
int		ft_if_dez(char dig, char *dict, int d);
int		ft_if_teens(char dig, char *dict, int d);

#endif

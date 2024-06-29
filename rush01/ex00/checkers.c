/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aremkrtc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 17:38:37 by aremkrtc          #+#    #+#             */
/*   Updated: 2021/09/19 17:38:46 by aremkrtc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		checkboard(int board[4][4], int *in_num);

int	case0(int board[4][4], int *r, int *c)
{
	*r = 0;
	*c = 0;
	while (*r < 4)
	{
		*c = 0;
		while (*c < 4)
		{
			if (board[*r][*c] == 0)
				return (1);
			*c += 1;
		}
		*r += 1;
	}
	return (0);
}

int	okcol(int board[4][4], int col, int num)
{
	int	row;

	row = 0;
	while (row < 4)
	{
		if (board[row][col] == num)
			return (0);
		row++;
	}
	return (1);
}

int	okrow(int board[4][4], int row, int num)
{
	int	col;

	col = 0;
	while (col < 4)
	{
		if (board[row][col] == num)
			return (0);
		col++;
	}
	return (1);
}

int	checkok(int board[4][4], int r, int c, int num)
{
	if (okrow(board, r, num))
	{
		if ((okcol(board, c, num)) && (board[r][c] == 0))
			return (1);
	}
	return (0);
}

int	fillb(int board[4][4], int *input)
{
	int	row;
	int	col;
	int	n;

	n = 1;
	if ((case0(board, &row, &col) == 0) && (checkboard(board, input) == 1))
		return (1);
	while (n <= 4)
	{
		if (checkok(board, row, col, n))
		{
			board[row][col] = n;
			if (fillb(board, input) == 1)
				return (1);
			board[row][col] = 0;
		}
		n++;
	}
	return (0);
}

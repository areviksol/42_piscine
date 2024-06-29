/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tablecheck.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aremkrtc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 17:40:18 by aremkrtc          #+#    #+#             */
/*   Updated: 2021/09/19 18:26:18 by aremkrtc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	col_up(int board[4][4], int col, int num)
{
	int	i;
	int	max;
	int	count;

	i = 0;
	count = 1;
	max = board[i][col];
	while (i < 4)
	{
		if (board[i][col] > max)
		{
			max = board[i][col];
			count++;
		}
		i++;
	}
	if (count == num)
		return (1);
	return (0);
}

int	col_down(int board[4][4], int col, int num)
{
	int	i;
	int	max;
	int	count;

	i = 3;
	count = 1;
	max = board[i][col];
	while (i >= 0)
	{
		if (board[i][col] > max)
		{
			max = board[i][col];
			count++;
		}
		i--;
	}
	if (count == num)
		return (1);
	return (0);
}

int	row_left(int board[4][4], int row, int num)
{
	int	i;
	int	max;
	int	count;

	i = 0;
	count = 1;
	max = board[row][i];
	while (i < 4)
	{
		if (board[row][i] > max)
		{
			max = board[row][i];
			count++;
		}
		i++;
	}
	if (count == num)
		return (1);
	return (0);
}

int	row_right(int board[4][4], int row, int num)
{
	int	i;
	int	max;
	int	count;

	i = 3;
	count = 1;
	max = board[row][i];
	while (i >= 0)
	{
		if (board[row][i] > max)
		{
			max = board[row][i];
			count++;
		}
		i--;
	}
	if (count == num)
		return (1);
	return (0);
}

int	checkboard(int board[4][4], int *in_num)
{
	int	i;

	i = 0;
	while (in_num[i])
	{
		if (i >= 0 && i <= 3)
			if (!col_up(board, i, in_num[i]))
				return (0);
		if (i >= 4 && i <= 7)
			if (!col_down(board, i - 4, in_num[i]))
				return (0);
		if (i >= 8 && i <= 11)
			if (!row_left(board, i - 8, in_num[i]))
				return (0);
		if (i >= 12 && i <= 15)
			if (!row_right(board, i - 12, in_num[i]))
				return (0);
		i++;
	}
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 13:37:52 by lzilio            #+#    #+#             */
/*   Updated: 2022/02/06 21:18:40 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	top(int column, int max_column);
void	bottom(int column, int max_column);
void	middle(int column, int max_column);
void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	j = 0;
	if (x >= 1 && y >= 1)
	{
		while (j < y)
		{
			i = 0;
			while (i < x)
			{
				if (j == 0)
					top (i, x - 1);
				else if (j == y - 1)
					bottom (i, x - 1);
				else
					middle (i, x - 1);
				i++;
			}
			write(1, "\n", 1);
			j++;
		}
	}
}

void	top(int column, int max_column)
{
	if (column == 0)
		ft_putchar ('o');
	else if (column == max_column)
		ft_putchar ('o');
	else
		ft_putchar ('-');
}

void	bottom(int column, int max_column)
{
	if (column == 0)
		ft_putchar('o');
	else if (column == max_column)
		ft_putchar('o');
	else
		ft_putchar('-');
}

void	middle(int column, int max_column)
{
	if (column == max_column)
		ft_putchar('|');
	else if (column == 0)
		ft_putchar('|');
	else
		ft_putchar(' ');
}

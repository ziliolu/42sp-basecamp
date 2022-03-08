/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzilio <lzilio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 00:49:07 by lzilio            #+#    #+#             */
/*   Updated: 2022/02/08 13:46:53 by lzilio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char *n);
void	condition1(char *n);
void	condition2(char *n);
void	condition3(char *n);
void	condition4(char *n);

void	ft_print_comb2(void)
{
	char	n[5];

	n[0] = '0';
	n[1] = '0';
	n[2] = ' ';
	n[3] = '0';
	n[4] = '1';
	while (n[0] <= '9')
	{
		while (n[1] <= '9')
		{
			while (n[3] <= '9')
			{
				while (n[4] <= '9')
				{
					print(n);
				}
				condition1(n);
			}
			condition2(n);
		}
		condition3(n);
	}
}

void	print(char *n)
{
	write (1, n, 5);
	if (!(n[0] == '9' && n[1] == '8'))
		write (1, ", ", 2);
	n[4]++;
}

void	condition1(char *n)
{
	n[4] = '0';
	n[3]++;
}

void	condition2(char *n)
{
	n[1]++;
	n[3] = n[0];
	n[4] = n[1] + 1;
}

void	condition3(char *n)
{
	n[0]++;
	n[1] = '0';
	n[3] = n[0];
	n[4] = n[1] + 1;
}

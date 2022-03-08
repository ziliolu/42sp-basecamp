/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzilio <lzilio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 18:01:36 by lzilio            #+#    #+#             */
/*   Updated: 2022/02/07 12:58:02 by lzilio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	char	positive_null;
	char	negative;

	positive_null = 'P';
	negative = 'N';
	if (n >= 0)
	{
		write (1, &positive_null, 1);
	}
	else
	{
		write (1, &negative, 1);
	}
}

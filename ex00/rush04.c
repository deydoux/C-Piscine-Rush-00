/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 20:37:16 by deydoux           #+#    #+#             */
/*   Updated: 2023/07/07 21:26:14 by deydoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	line(char left, char middle, char right, int x)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			ft_putchar(left);
		else if (i == x)
			ft_putchar(right);
		else
			ft_putchar(middle);
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = y - 2;
	if (x <= 0 || y <= 0)
		return ;
	line('A', 'B', 'C', x);
	while (i > 0)
	{
		line('B', ' ', 'B', x);
		i--;
	}
	if (y >= 2)
		line('C', 'B', 'A', x);
}
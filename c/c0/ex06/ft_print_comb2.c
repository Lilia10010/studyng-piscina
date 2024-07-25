/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaula-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 16:45:48 by lpaula-n          #+#    #+#             */
/*   Updated: 2024/07/17 17:42:15 by lpaula-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_display_two_comb(int number)
{
	int	x;
	int	y;

	if (number > 9)
	{
		x = number / 10;
		y = number % 10;
		ft_putchar(x + 48);
		ft_putchar(y + 48);
	}
	else
	{
		ft_putchar(48);
		ft_putchar(number + 48);
	}
}

void	ft_display_combination(int x, int y)
{
	ft_display_two_comb(x);
	ft_putchar(' ');
	ft_display_two_comb(y);
	if (x < 98 || y < 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_display_combination(x, y);
			y++;
		}
		x++;
	}
}

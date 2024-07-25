/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaula-n <lpaula-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 11:53:25 by nade-lim          #+#    #+#             */
/*   Updated: 2024/07/14 18:13:53 by lpaula-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_n_times(char c, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(c);
		i++;
	}
}

void	print_first_last_row(int x, int is_last_row)
{
	if (x > 0)
	{
		if (is_last_row)
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('A');
		}
		if (x > 1)
		{
			print_n_times('B', x - 2);
			if (is_last_row)
			{
				ft_putchar('C');
			}
			else
			{
				ft_putchar('A');
			}
		}
		write(1, "\n", 1);
	}
}

void	print_middle_row(int x)
	{
	if (x > 0)
	{
		ft_putchar('B');
	}
	if (x > 1)
	{
		print_n_times(' ', x - 2);
		ft_putchar('B');
	}
	write(1, "\n", 1);
}

void	rush(int x, int y)
{
	int	row;

	row = 1;
	if (row > 0)
	{
		print_first_last_row(x, 0);
		row++;
	}
	while (row < y)
	{
		print_middle_row(x);
		row++;
	}
	if (row == y)
	{		
		print_first_last_row(x, 1);
	}
}

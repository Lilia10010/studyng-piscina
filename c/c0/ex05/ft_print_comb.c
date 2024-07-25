/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaula-n <lpaula-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 21:25:43 by lpaula-n          #+#    #+#             */
/*   Updated: 2024/07/17 17:32:59 by lpaula-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	write_comb(char a, char b, char c, char last)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (last)
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_print_comb(void)
{
	int	comb1;
	int	comb2;
	int	comb3;

	comb1 = 0;
	while (comb1 <= 9)
	{
		comb2 = comb1 + 1;
		while (comb2 <= 9)
		{
			comb3 = comb2 + 1;
			while (comb3 <= 9)
			{			
				if (comb1 != 7 || comb2 != 8 || comb3 != 9
				)
					write_comb(comb1 + '0', comb2 + '0', comb3 + '0', 1);
				else
					write_comb(comb1 + '0', comb2 + '0', comb3 + '0', 0);
					comb3++;
			}
				comb2++;
		}
			comb1++;
	}
}

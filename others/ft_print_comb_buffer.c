/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb_buffer.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaula-n <lpaula-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 21:25:43 by lpaula-n          #+#    #+#             */
/*   Updated: 2024/07/16 16:58:25 by lpaula-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	comb1;
	int	comb2;
	int	comb3;
	char	buffer[0] = 1

	comb1 = 0;
	while (comb1 <=9)
	{
		comb2 = comb1 + 1;
		while (comb2 <= 9)
			{
				comb3 = comb2 + 1;
				while (comb3 <=9 )
				{
					buffer[0] = comb1 + '0';
					buffer[1] = comb2 + '0';
					buffer[2] = comb3 + '0';
					if(comb1 != 7 || comb2 != 8 || comb3 != 9)
					{
						buffer[3] = ',';
						buffer[4] = ' ';
						write(1, buffer, 4);
					}
						else
						{
							write(1, buffer, 2);
						}
						comb3++;
				}
					comb2++;
			}
				comb1++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}

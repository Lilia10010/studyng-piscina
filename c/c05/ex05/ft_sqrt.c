/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaula-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 08:18:20 by lpaula-n          #+#    #+#             */
/*   Updated: 2024/08/01 08:22:18 by lpaula-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i * i < nb && i <= 46340)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}
/*
int main(void)
{
    int number;
    int result;

    number = 16;
    result = ft_sqrt(number);
    printf(" %d >>> %d\n", number, result);
    return 0;
}
*/
/*
 *Exemplo 1: nb = 16

Inicialmente, i = 0.
O loop incrementa i até que i * i seja maior ou igual a 16:
i = 0 -> 0 * 0 = 0 (menor que 16)
i = 1 -> 1 * 1 = 1 (menor que 16)
i = 2 -> 2 * 2 = 4 (menor que 16)
i = 3 -> 3 * 3 = 9 (menor que 16)
i = 4 -> 4 * 4 = 16 (igual a 16)
*/

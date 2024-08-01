/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaula-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 05:56:20 by lpaula-n          #+#    #+#             */
/*   Updated: 2024/08/01 07:21:30 by lpaula-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (nb == 0 || power == 0)
		return (1);
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (nb * ft_recursive_power(nb, power -1));
}
/*
int main()
{
    int base = 5;
    int exp = 3;
    int result;

    result = ft_recursive_power(base, exp);
    printf("Resultado de %d^%d é: %d\n", base, exp, result);

    return 0;
}*/

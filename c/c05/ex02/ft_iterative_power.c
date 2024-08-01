/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaula-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 02:38:23 by lpaula-n          #+#    #+#             */
/*   Updated: 2024/08/01 07:18:41 by lpaula-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	if (!nb && !power)
		return (1);
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	i = 0;
	res = 1;
	while (i < power)
	{
		res = res * nb;
		i++;
	}
	return (res);
}
/*
int main(void)
{
    int base, exp;
    int result;

    base = 2;
    exp = 3;
    result = ft_iterative_power(base, exp);
    printf("%d^%d = %d\n", base, exp, result); 

    return 0;
}*/

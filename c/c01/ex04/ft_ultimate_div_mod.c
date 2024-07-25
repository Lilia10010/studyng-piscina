/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaula-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:49:46 by lpaula-n          #+#    #+#             */
/*   Updated: 2024/07/19 19:47:41 by lpaula-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		mod_tmp;

	mod_tmp = *a % *b;
	*a = *a / *b;
	*b = mod_tmp;
}
/*
int	main(void)
{
	 int x = 20;
	 int y = 10;

	 ft_ultimate_div_mod(&x, &y);

	 printf("Resultado da divisão: %d\n", x);
	 printf("Resultado do módulo: %d\n", y);

    return 0;
}
*/

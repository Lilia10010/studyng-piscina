/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaula-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 20:13:26 by lpaula-n          #+#    #+#             */
/*   Updated: 2024/07/30 06:12:14 by lpaula-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
int	main(void)
{
	char	*msg = "-52345";
	int	result;
	result =  ft_strlen(msg);
	printf("%i\n", result);
	return (0);
}*/

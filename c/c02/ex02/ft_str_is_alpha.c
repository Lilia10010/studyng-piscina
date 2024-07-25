/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaula-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 20:46:19 by lpaula-n          #+#    #+#             */
/*   Updated: 2024/07/21 21:20:23 by lpaula-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')))
			return (0);
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	char msg1[] = "HelloWorld";
	char msg2[] = "Hello World";
	char msg3[] = "123Hello";
	char msg4[] = "";

	if (ft_str_is_alpha(msg1))
		printf("\"%s\" is alphabetic.\n", msg1);
	else
		printf("\"%s\" is not alphabetic.\n", msg1);

	if (ft_str_is_alpha(msg2))
		printf("\"%s\" is alphabetic.\n", msg2);
	else
		printf("\"%s\" is not alphabetic.\n", msg2);

	if (ft_str_is_alpha(msg3))
		printf("\"%s\" is alphabetic.\n", msg3);
	else
		printf("\"%s\" is not alphabetic.\n", msg3);
	if (ft_str_is_alpha(msg4))
		printf("\"%s\" is alphabetic.\n", msg4);
	else    
	            printf("\"%s\" is not alphabetic.\n", msg4);
	return (0);
}*/

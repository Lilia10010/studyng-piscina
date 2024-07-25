/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaula-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 22:06:05 by lpaula-n          #+#    #+#             */
/*   Updated: 2024/07/21 22:28:10 by lpaula-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//include <stdio.h>
int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (!(*str >= 'a' && *str <= 'z'))
			return (0);
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	char	msg[] = "Hello world";
	char	msg1[] = "helloworld";
	char	msg2[] = "1a2b3";
	char	msg3[] = "";

	if(ft_str_is_lowercase(msg))
		printf("\"%s\" is lowercase.\n", msg);
	else
		printf("\"%s\" is not lowercase.\n", msg);
	if(ft_str_is_lowercase(msg1))
		printf("\"%s\" is lowercase.\n", msg1);
	else
		("\"%s\" is not lowercase.\n", msg1);
	if (ft_str_is_lowercase(msg2))
		printf("\"%s\" is lowercase.\n", msg2);
	else
		printf("\"%s\" is not lowercase.\n", msg2);
	if (ft_str_is_lowercase(msg2))
                printf("\"%s\" is lowercase.\n", msg2);
	if (ft_str_is_lowercase(msg3))
                printf("\"%s\" is lowercase.\n", msg3);

	return (0);
}*/

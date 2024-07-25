/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaula-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 14:47:08 by lpaula-n          #+#    #+#             */
/*   Updated: 2024/07/21 19:37:36 by lpaula-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	char		*dest_tmp;

	dest_tmp = dest;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest_tmp);
}
/*
int main(void)
{
	char		msg[] = "hello word";
	char		msg_dest[] = "";

	ft_strcpy(msg_dest, msg);
	printf("%s\n", msg_dest);
	return (0);
}*/

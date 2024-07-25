/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaula-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 22:32:27 by lpaula-n          #+#    #+#             */
/*   Updated: 2024/07/21 22:47:16 by lpaula-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (!(*str >= 'A' && *str <= 'Z'))
			return (0);
		str++;
	}
	return (1);
}
/*
int main(void)
{
    char msg[] = "Hello world";
    char msg1[] = "VRAU";
    char msg2[] = "1a2b3";
    char msg3[] = ""; // String vazia

    if (ft_str_is_uppercase(msg))
        printf("\"%s\" is uppercase.\n", msg);
    else
        printf("\"%s\" is not uppercase.\n", msg);
    
    if (ft_str_is_uppercase(msg1))
        printf("\"%s\" is uppercase.\n", msg1);
    else
        printf("\"%s\" is not uppercase.\n", msg1);
    
    if (ft_str_is_uppercase(msg2))
        printf("\"%s\" is uppercase.\n", msg2);
    else
        printf("\"%s\" is not uppercase.\n", msg2);
    
    if (ft_str_is_uppercase(msg3))
        printf("\"%s\" is uppercase.\n", msg3);
    else
        printf("\"%s\" is not uppercase.\n", msg3);

    return (0);
}*/

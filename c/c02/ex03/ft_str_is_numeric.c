/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaula-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 21:49:06 by lpaula-n          #+#    #+#             */
/*   Updated: 2024/07/21 22:03:08 by lpaula-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	//if (*str == '\0')
	//	return (1);

	while (*str)
	{
		if(!(*str >='0' && *str <='9'))
			return (0);
		str++;
	}
	return(1);
}


int main(void)
{
    char msg1[] = "123456";
    char msg2[] = "1234a6";
    char msg3[] = "09876";
    char msg4[] = "";

    if (ft_str_is_numeric(msg1))
        printf("\"%s\" is numeric.\n", msg1);
    else
        printf("\"%s\" is not numeric.\n", msg1);

    if (ft_str_is_numeric(msg2))
        printf("\"%s\" is numeric.\n", msg2);
    else
        printf("\"%s\" is not numeric.\n", msg2);

    if (ft_str_is_numeric(msg3))
        printf("\"%s\" is numeric.\n", msg3);
    else
        printf("\"%s\" is not numeric.\n", msg3);

    if (ft_str_is_numeric(msg4))
        printf("\"%s\" is numeric.\n", msg4);
    else
        printf("\"%s\" is not numeric.\n", msg4);

    return (0);

}

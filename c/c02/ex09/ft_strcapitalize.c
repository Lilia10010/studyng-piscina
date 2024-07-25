/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaula-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 18:46:10 by lpaula-n          #+#    #+#             */
/*   Updated: 2024/07/22 18:54:54 by lpaula-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	char	*orig = str;
	int new_word;

	new_word = 1;
	while (*str)
	{
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z') || (*str >= '0' && *str <= '9')) {
			if (new_word && (*str >= 'a' && *str <= 'z'))
			{
				*str = *str - ('a' - 'A');
			}
			else if (!new_word && (*str >= 'A' && *str <= 'Z'))
			{
				*str = *str + ('a' - 'A');
			}
			new_word = 0;
			}
		else
		{
			new_word = 1;
		}
		str++;
	}
	return (orig);
}


int main() {
    char str1[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
    printf("Original: %s\n", str1);
    printf("Capitalizado: %s\n", ft_strcapitalize(str1));
    return 0;
}


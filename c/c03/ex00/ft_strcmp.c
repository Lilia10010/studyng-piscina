/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaula-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 18:48:57 by lpaula-n          #+#    #+#             */
/*   Updated: 2024/07/25 14:36:51 by lpaula-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
/*
int main()
{
    char *str1 = "A";
    char *str2 = "A";
    char *str3 = "a";
    char *str4 = "a";

    printf("Comparando '%s' e '%s': %d\n", str1, str3, ft_strcmp(str1, str3)); 
    printf("Comparando '%s' e '%s': %d\n", str1, str2, ft_strcmp(str1, str2)); 
    printf("Comparando '%s' e '%s': %d\n", str3, str1, ft_strcmp(str3, str1)); 

    return 0;
}*/

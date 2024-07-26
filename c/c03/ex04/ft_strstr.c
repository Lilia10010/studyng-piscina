/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaula-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 15:33:42 by lpaula-n          #+#    #+#             */
/*   Updated: 2024/07/26 16:30:48 by lpaula-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strstr(char *str, char *to_find)
{
	int	str_count;
	int	to_find_count;

	if(*to_find == '\0')
		return str;

	str_count = 0;
	while (str[str_count] != '\0')
	{
		to_find_count = 0;
		//Compara o caractere atual da string str (na posição str_count + to_find_count) com o caractere na substring to_find (na posição to_find_count).
		while (str[str_count + to_find_count] !='\0' && 
				str[str_count + to_find_count] == to_find[to_find_count])
		{
			//se encontrou toda a substrig retorna o endereço de str
			if (to_find[to_find_count + 1] == '\0')
				return (&str[str_count]);
			to_find++;
		}
		str_count++;
	}
	return (0);
}

int main() {
    char str[] = "Hello oi  world ";
    char to_find[] = "gd";

    char *result = ft_strstr(str, to_find);
    if (result) {
        printf("'%s' em '%s' está na posição: %ld\n", to_find, str, result - str);
    } else {
        printf(" '%s' não está em '%s'\n", to_find, str);
    }

    return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaula-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 15:29:37 by lpaula-n          #+#    #+#             */
/*   Updated: 2024/07/22 16:15:03 by lpaula-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str < 32 || *str > 126)
			return (0);
		str++;
	}
	return (1);
}
/*
int main() {
    char *test1 = "Hello, World!";
    char *test2 = "Hello\nWorld";
    char *test3 = "1234567890";
    char *test4 = "\tHello";
    char *test5 = "";

    printf("Test 1: %d\n", ft_str_is_printable(test1));
    printf("Test 2: %d\n", ft_str_is_printable(test2));
    printf("Test 3: %d\n", ft_str_is_printable(test3));
    printf("Test 4: %d\n", ft_str_is_printable(test4));
    printf("Test 5: %d\n", ft_str_is_printable(test5));

    return 0;
}*/

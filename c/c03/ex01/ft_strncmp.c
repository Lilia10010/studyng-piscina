/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaula-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 21:33:59 by lpaula-n          #+#    #+#             */
/*   Updated: 2024/07/25 14:43:27 by lpaula-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int main()
{
    char *str1 = "hello";
    char *str2 = "Hello";
    char *str3 = "Wello";

    printf("Comparando '%s' e '%s': %d\n", str1, str3, ft_strncmp(str1, str3, 1));
    printf("Comparando '%s' e '%s': %d\n", str1, str2, ft_strncmp(str1, str2, 1));
    printf("Comparando '%s' e '%s': %d\n", str3, str1, ft_strncmp(str3, str1, 1));

    return 0;
}


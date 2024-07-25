/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaula-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 09:31:32 by lpaula-n          #+#    #+#             */
/*   Updated: 2024/07/25 12:38:01 by lpaula-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int j;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int main()
{
    char dest[50] = "Hello, ";
    char src[] = "World!";

    unsigned int nb = 3;

    printf("antes => %s\n", dest);

    ft_strncat(dest, src, nb);

    printf("depois =>  %s\n", dest);

    return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaula-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 09:31:32 by lpaula-n          #+#    #+#             */
/*   Updated: 2024/07/25 15:30:09 by lpaula-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*dest_tmp;

	dest_tmp = dest;
	while (*dest)
		dest++;
	while (*src && nb)
	{
		*dest = *src;
		dest++;
		src++;
		nb--;
	}
	*dest = '\0';
	return (dest_tmp);
}
/*
int main()
{
    char dest[50] = "Hello, ";
    char src[] = "World! tmj";

    unsigned int nb = 6;

    printf("antes => %s\n", dest);

    ft_strncat(dest, src, nb);

    printf("depois =>  %s\n", dest);

    return 0;
}*/

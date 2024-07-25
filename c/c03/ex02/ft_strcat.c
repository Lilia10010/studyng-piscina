/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaula-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 23:24:02 by lpaula-n          #+#    #+#             */
/*   Updated: 2024/07/24 04:30:41 by lpaula-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char *tmp_dest = dest;

	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (tmp_dest);
}

int main(void)
{
	char	msg[20] = "world";
	char	msg_dest[40] = "hello";
	printf("'%s'", ft_strcat(msg_dest, msg));
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaula-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 01:40:35 by lpaula-n          #+#    #+#             */
/*   Updated: 2024/07/31 02:10:33 by lpaula-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int 	arg_len;

	i = 1;
	if(argc > 1)
	{
		while(i < argc)
		{
			j = 0;
			arg_len = 0;
			while (argv[i][j] != '\0')
			{
				arg_len++;
				j++;
			}
			while (arg_len > 0)
			{
				arg_len--;
				write(1, &argv[i][arg_len], 1);
			}
			write(1, "\n", 1);
			i++;
		}
	}
}

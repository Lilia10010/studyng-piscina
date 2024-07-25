/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaula-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 15:20:30 by lpaula-n          #+#    #+#             */
/*   Updated: 2024/07/20 16:36:51 by lpaula-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_error(void)
{
	write(1, "Error\n", 6);
}

int	is_valid_argument(char *arg)
{
	if (arg[0] >= '1' && arg[0] <= '4' && arg[1] == '\0')
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	int		i;

	i = 1;
	if (argc != 17)
	{
		print_error();
		return (1);
	}
	while (i < argc)
	{
		if (!is_valid_argument(argv[i]))
		{
			print_error();
			return (1);
		}
		i++;
	}
	return (0);
}

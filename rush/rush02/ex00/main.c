/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaula-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 20:47:59 by lpaula-n          #+#    #+#             */
/*   Updated: 2024/07/28 21:50:49 by lpaula-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "header.h"

int	main(int argc, char *argv[])
{
	if (argc > 3 || argc <= 1)
	{
		error();
		return (0);
	}
	if (argc == 3)
	{
		import_dict(argv[1]);
	}
	if (argc == 2)
	{
		import_dict("numbers.dict");
	}
	print_number_as_words(argv[argc - 1]);
	return (0);
}

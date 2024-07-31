/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaula-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 18:34:18 by lpaula-n          #+#    #+#             */
/*   Updated: 2024/07/28 21:54:07 by lpaula-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "header.h"

static bool	is_valid_number(char *num_str)
{
	int	i;

	i = 0;
	while (num_str[i])
	{
		if (!ft_isdigit(num_str[i]))
			return (false);
		i++;
	}
	return (true);
}

char	*convert_number(char *num_str)
{
	int		num;
	char	*result;

	num = ft_atoi(num_str);
	if (num == 0)
		return (ft_strdup("zero"));
	result = convert_group(num);
	if (!result)
		return (NULL);
	return (result);
}

void	print_number_as_words(char *num_str)
{
	char	*result;

	if (!is_valid_number(num_str))
	{
		error();
		return ;
	}
	result = convert_number(num_str);
	if (result)
	{
		ft_putstr(result);
		ft_putchar('\n');
		free(result);
	}
}

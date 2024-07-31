/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashmap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaula-n <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 19:29:14 by lpaula-n          #+#    #+#             */
/*   Updated: 2024/07/28 22:06:27 by lpaula-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

typedef struct s_hashmap
{
	char				*key;
	char				*value;
	struct s_hashmap	*next;
}	t_hashmap;

t_hashmap	*g_hashmap[HASHMAP_SIZE];

unsigned int	hash(char *key)
{
	int	c;
	unsigned long	hash;
	
	hash = 5381;
	while ((c = *key++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash % HASHMAP_SIZE);
}

void	add_to_hashmap(char *key, char *value)
{
	unsigned int	index;
	t_hashmap	*new_node;

	index = hash(key);
	new_node = malloc(sizeof(t_hashmap));
	if (new == NULL)
	{
		return ;
	}
	new->key = ft_strdup(key);
	new->value = ft_strdup(value);
	new->next = g_hashmap[index];
	hashmap[index] = new;
}

void	free_hashmap(void)
{
	int	i;

	i = 0;
	while (i < HASHMAP_SIZE)
	{
		t_hashmap	*new;

		new = hashmap[i];
		while (new)
		{
			t_hashmap	*tmp;	

			tmp = new;
			new = new->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
		i++;
	}
}

char	*get_from_hashmap(char *key)
{
	unsigned int	index;
	t_hashmap	*new;

	index = hash(key);
	new = hashmap[index];
	while (new)
	{
		if (ft_strcmp(new->key, key) == 0)
			return (new->value);
		new = new->next;
	}
	return (NULL);
}

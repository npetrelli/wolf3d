/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_map3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjoss <mjoss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 19:10:10 by mjoss             #+#    #+#             */
/*   Updated: 2020/11/26 19:10:42 by mjoss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map_parser.h"

void	from_char2struct(t_map *map, char *map_tmp)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (j < map->height)
	{
		while (i < map->width)
		{
			if (*map_tmp == PLAYER_CHARACTER)
			{
				map->player_position.x = i;
				map->player_position.y = j;
				*map_tmp = '0';
			}
			if (!ft_isdigit(*map_tmp))
			{
				map_tmp++;
				continue;
			}
			map->map[j][i++] = *map_tmp++ - '0';
		}
		i = 0;
		j++;
	}
}

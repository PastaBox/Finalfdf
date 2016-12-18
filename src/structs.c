/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgeorge <thgeorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 11:38:24 by thgeorge          #+#    #+#             */
/*   Updated: 2016/12/15 16:09:41 by thgeorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fdf.h"

t_iso		*iso_new(int len, int *px_x, int *px_y)
{
	t_iso		*iso;

	iso = NULL;
	if (!(iso = (t_iso *)malloc(sizeof(t_iso) * 1)))
		error_handler("memory allocation failed", 0);
	iso->st_x = 0;
	iso->st_y = 0;
	iso->px_x = px_x;
	iso->px_y = px_y;
	iso->len = len;
	return (iso);
}

t_point		*points_new(int len)
{
	int			*pos_x;
	int			*pos_y;
	int			*pos_z;
	t_point		*pts;

	pos_x = 0;
	pos_y = 0;
	pos_z = 0;
	pts = NULL;
	if (		!(pts = (t_point *)malloc(sizeof(t_point) * 1))
			||	!(pos_x = (int *)malloc(sizeof(int) * len))
			|| 	!(pos_y = (int *)malloc(sizeof(int) * len))
			|| 	!(pos_z = (int *)malloc(sizeof(int) * len)))
		error_handler("memory allocation failed", 0);
	pts->pos_x = pos_x;
	pts->pos_y = pos_y;
	pts->pos_z = pos_z;
	pts->len = len;
	pts->length_x = 0;
	pts->length_y = 0;
	return (pts);
}

t_map		*map_new(void)
{
	t_line		*lines;
	t_map		*map;

	lines = NULL;
	map = NULL;
	if (		!(lines = (t_line *)malloc(sizeof(t_line) * 1))
			||	!(map = (t_map *)malloc(sizeof(t_map) * 1)))
		error_handler("memory allocation failed", 0);
	lines->points = NULL;
	lines->cl = 0;
	lines->ln = 0;
	lines->length = 0;
	map->lines = lines;
	return (map);
}

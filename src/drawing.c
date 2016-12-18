/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drawing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grleblan <grleblan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 12:07:10 by grleblan          #+#    #+#             */
/*   Updated: 2016/12/16 16:29:02 by thgeorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fdf.h"

void			print_grid_points(void *mlx, void *win, t_iso *iso)
{
	int			*pos_x;
	int			*pos_y;
	int			i;

	pos_x = iso->px_x;
	pos_y = iso->px_y;
	i = -1;
	while (++i < iso->len)
	{
		mlx_pixel_put(mlx, win, pos_x[i], pos_y[i], 0xFFFFFF);
	}
}

unsigned int	ft_color(int z)
{
	unsigned int	color;
	t_point			tab;
	int				*tabz;


	tabz = tab.pos_z;
	color = tab.color;
	if (tabz[z] == 0)
		color = 0xFFFFFF;
	if (tabz[z] < tabz[z + 1])
		color--;
	else
		color++;
	tab.color = color;
	return (color);
}

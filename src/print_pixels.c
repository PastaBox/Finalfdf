/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pixels.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grleblan <grleblan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 12:07:10 by grleblan          #+#    #+#             */
/*   Updated: 2016/12/18 10:50:57 by thgeorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fdf.h"

void		ft_tracer_pixel_a_to_z(t_fdf *fdf)
{
	int		save_x;
	int		save_y;
	int		count;

	count = 0;
	//ft_create_image(fdf, 1);
	while (count < fdf->iso->len)
	{
		save_x = fdf->iso->px_x[count];
		save_y = fdf->iso->px_y[count];
		while ((save_x != fdf->iso->px_x[count + 1] || save_y != fdf->iso->px_y[count + 1])
			&& ((count + 1) % (fdf->map->lines->points->length_x) != 0))
		{
			mlx_pixel_put(fdf->mlx, fdf->win, save_x, save_y, 0xFFFFFF);
			if (fdf->iso->px_x[count + 1] > save_x)
				save_x++;
			else
				save_x--;
			if (fdf->iso->px_y[count + 1] > save_y)
				save_y++;
			else
				save_y--;
		}
		count++;
	}
	ft_tracer_pixel_z_to_a(fdf);
	//ft_create_image(fdf, 2);
}

void		ft_tracer_pixel_z_to_a(t_fdf *fdf)
{
	int		count;
	int		save_x;
	int		save_y;

	count = 0;
	while (count < fdf->iso->len)
	{
		save_x = fdf->iso->px_x[count];
		save_y = fdf->iso->px_y[count];
		while ((save_x != fdf->iso->px_x[count + fdf->map->lines->points->length_x]
				|| 	save_y != fdf->iso->px_y[count + fdf->map->lines->points->length_x])
				&& 	((count + 1) % (fdf->map->lines->points->length_x) != 0))
		{
			mlx_pixel_put(fdf->mlx, fdf->win, save_x, save_y, 0xFFFFFF);
			if (fdf->iso->px_x[count + fdf->map->lines->points->length_x] > save_x)
				save_x++;
			else
				save_x--;
			if (fdf->iso->px_y[count + fdf->map->lines->points->length_y] > save_y)
				save_y++;
			else
				save_y--;
		}
		count++;
	}
}

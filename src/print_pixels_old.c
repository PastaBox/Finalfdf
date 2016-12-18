/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pixels.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grleblan <grleblan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 12:07:10 by grleblan          #+#    #+#             */
/*   Updated: 2016/12/16 16:56:43 by thgeorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fdf.h"

void	ft_create_image(t_fdf *e, int n)
{
	ft_putstr("in create\n");
	if (n == 1)
	{
		ft_putstr("IMG EXISTE\n");
		e->im = mlx_new_image(e->mlx, WIN_W, WIN_H);
		ft_putstr("IMG EXISTE\n");
	}
	if (n == 2)
	{
		mlx_put_image_to_window(e->mlx, e->win, e->im, 0, 0);
		//mlx_destroy_image(e->mlx, e->im);
	}
}

void		ft_pixel_to_image(t_fdf *fdf, int x, int y, int z)
{
	t_image				e;

	z = 0;
	if (x < e.width && y < (y * e.height))
		((unsigned int*)(fdf->pic->buffer))[x + (y * e.width)] = 0xFFFFFF;//ft_color(z);
}

void		ft_tracer_pixel_a_to_z(t_fdf *fdf)
{
	int		save_x;
	int		save_y;
	int		count;

	count = 0;
	ft_create_image(fdf, 1);
	while (count < fdf->iso->len)
	{
		printf("While #1, count = %d\n", count);
		save_x = fdf->iso->px_x[count];
		save_y = fdf->iso->px_y[count];
		while (save_x != fdf->iso->px_x[count + 1] && save_y != fdf->iso->px_y[count + 1]
			&& ((count + 1) % (fdf->map->lines->points->length_x) != 0))
		{
			ft_pixel_to_image(fdf, save_x, save_y, fdf->map->lines->points->pos_z[count + 1]);
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
	printf("about to trace z_a\n");
	ft_tracer_pixel_z_to_a(fdf);
	printf("creat image\n");
	ft_create_image(fdf, 2);
}

void		ft_tracer_pixel_z_to_a(t_fdf *fdf)
{
	int		count;
	int		save_x;
	int		save_y;
	printf("assign\n");

	count = fdf->iso->len;
	//printf("start with len = %d\n", count);
	while (count > 0)
	{
		//printf("greg suce un while #1\n");
		save_x = fdf->iso->px_x[count];
		save_y = fdf->iso->px_y[count];
		while (save_x != fdf->iso->px_x[count - fdf->map->lines->points->length_x] \
				&& save_y != fdf->iso->px_y[count - fdf->map->lines->points->length_x] \
				&& ((count) % (fdf->map->lines->points->length_x) != 0))
		{
			//printf("greg suce un while #2\n");
			ft_pixel_to_image(fdf, save_x, save_y, fdf->map->lines->points->pos_z[count + 1]);
			if (fdf->iso->px_x[count - fdf->map->lines->points->length_x] > save_x)
				save_x++;
			else
				save_x--;
			if (fdf->iso->px_y[count - fdf->map->lines->points->length_y] > save_y)
				save_y++;
			else
				save_y--;
		}
		count--;
	}
}

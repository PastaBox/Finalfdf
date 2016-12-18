/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fciprian <fciprian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 14:54:47 by fciprian          #+#    #+#             */
/*   Updated: 2016/12/16 17:48:01 by thgeorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fdf.h"

void		fdf_display(void)
{
	ft_putstr("======== Options =======\n");
	ft_putstr("\nESC : Leave the program\n");
	ft_putstr("Change color map : \n");
	ft_putstr("\t1 - Yellow\n");
	ft_putstr("\t2 - Blue\n");
	ft_putstr("\t3 - Red\n");
	ft_putstr("\t4 - Green\n");
	ft_putstr("\t5 - White\n");
	ft_putstr("ZOOM : +\n");
	ft_putstr("DEZOOM : -\n");
	ft_putstr("\n===================");
}

int			main(int argc, char **argv)
{
	t_fdf		fdf;
	//t_image		pic;

	if (argc == 2)
	{
		fdf.mlx = mlx_init();
		fdf.win = mlx_new_window(fdf.mlx, WIN_W, WIN_H, "FdF Main Frame");
		fdf.map = fdf_parse_map(argv[1], 0);
		fdf.iso = get_isometric_cords(fdf.map->lines->points);
		//print_grid_points(fdf.mlx, fdf.win, fdf.iso);
		ft_tracer_pixel_a_to_z(&fdf);
		fdf_display();
		//fdf.im = mlx_new_image(fdf.mlx, WIN_W, WIN_H);
		//mlx_hook(fdf.win, 2, 3, hook_keys, &fdf);
		//mlx_loop_hook(fdf.win, &loop_event, &fdf);
		mlx_loop(fdf.mlx);
	}
	else
		error_usage();
	return (0);
}

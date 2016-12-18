/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hooks_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fciprian <fciprian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 14:25:41 by fciprian          #+#    #+#             */
/*   Updated: 2016/12/15 15:24:53 by fciprian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fdf.h"

void	hook_color(int keycode, t_fdf *fdf)
{
	if (keycode == N1)
		fdf->color = 0xFFFF00;
	else if (keycode == N2)
		fdf->color = 0x33CCFF;
	else if (keycode == N3)
		fdf->color = 0xFF0000;
	else if (keycode == N4)
		fdf->color = 0x66CC00;
	else if (keycode == N5)
		fdf->color = 0xFFFFFF;
	mlx_clear_window(fdf->mlx, fdf->win);
}

void	hook_zoom(int keycode, t_fdf *fdf)
{
	int x;
	int y;
	int z;

	x = *fdf->map->lines->points->pos_x;
	y = *fdf->map->lines->points->pos_y;
	z = *fdf->map->lines->points->pos_z;
	fdf->coeff_x = 0.025;
	fdf->coeff_y = 0.025;
	fdf->coeff_z = 0.025;
	if (keycode == PLUS)
	{
		x *= fdf->coeff_x;
		y *= fdf->coeff_y;
		z *= fdf->coeff_z;
	}
	else if (keycode == MINUS)
	{
		x -= fdf->coeff_x;
		y -= fdf->coeff_y;
		z -= fdf->coeff_z;
	}
	mlx_clear_window(fdf->mlx, fdf->win);
}

void	hook_pov(int keycode, t_fdf *fdf)
{
	int	i;

	i = 0;
	while (i < 3)
	{
		if (keycode == F1 && i == 0)
		{
			fdf->pov = 1;
			mlx_clear_window(fdf->mlx, fdf->win);
			i++;
		}
		else if (keycode == F1 && i == 1)
		{
			fdf->pov = 2;
			mlx_clear_window(fdf->mlx, fdf->win);
			i++;
		}
		else if (keycode == F1 && i == 2)
		{
			fdf->pov = 3;
			mlx_clear_window(fdf->mlx, fdf->win);
			i++;
		}
		if (i == 2)
			i = 0;
	}
}

void	hook_moving(int keycode, t_fdf *fdf)
{
	int x;
	int y;

	x = *fdf->map->lines->points->pos_x;
	y = *fdf->map->lines->points->pos_y;
	fdf->coeff_x = 0.025;
	fdf->coeff_y = 0.025;
	if (keycode == D)
		x += fdf->coeff_x;
	else if (keycode == A)
		x -= fdf->coeff_x;
	else if (keycode == W)
		y += fdf->coeff_y;
	else if (keycode == S)
		y -= fdf->coeff_y;
}

void 	hook_exit(t_fdf *fdf)
{
	mlx_destroy_window(fdf->mlx, fdf->win);
	error_exit();
}

int		hook_keys(int keycode, t_fdf *fdf)
{
	if (keycode == ESC)
		hook_exit(fdf);
	if (keycode == N1 || keycode == N2 || keycode == N3 || keycode == N4 || keycode == N5)
		hook_color(keycode, fdf);
	if (keycode == PLUS || keycode == MINUS)
		hook_zoom(keycode, fdf);
	if (keycode == F1)
		hook_pov(keycode, fdf);
	if (keycode == D || keycode == A || keycode == W || keycode == S)
		hook_moving(keycode, fdf);
	return (1);
}

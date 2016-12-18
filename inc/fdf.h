/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fciprian <fciprian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 14:37:11 by fciprian          #+#    #+#             */
/*   Updated: 2016/12/16 17:54:37 by thgeorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

/*
**		Defines
*/

# define WIN_H 720
# define WIN_W 1280
# define SCALE 750

# define TILE_X 40
# define TILE_Y 40
# define TILE_Z 10

/*
**		Includes
*/

# include "../libft/libft.h"
# include "../minilibx_macos_sierra/mlx.h"

# include "keys.h"

# include <fcntl.h>
# include <math.h>
# include <stdio.h>

typedef struct		s_image
{
	int				width;
	int				height;
	char			*buffer;
	float			vertexes[8];
	struct s_image	*next;
}					t_image;

typedef	struct		s_point
{
	int				*pos_x;
	int				*pos_y;
	int				*pos_z;
	int				len;
	int				length_x;
	int				length_y;
	unsigned int	color;
}					t_point;

typedef struct		s_line
{
	t_point			*points;
	int				cl;
	int				ln;
	int				length;
}					t_line;

typedef struct		s_map
{
	t_line			*lines;
	int				length;
}					t_map;

typedef struct		s_iso
{
	int				*px_x;
	int				*px_y;
	int				len;
	int				st_x;
	int				st_y;
}					t_iso;

typedef struct		s_fdf
{
	void			*mlx;
	void			*win;
	void			*im;
	double			coeff_x;
	double			coeff_y;
	double			coeff_z;
	int				color;
	int				pov;
	t_image			*pic;
	t_map			*map;
	t_iso			*iso;
	t_point			*px;
}					t_fdf;

/*
**		Functions
*/

int			ft_get_points(char *string, t_line *line, int ln, int cl);
char		*replace_string(char *string);
int			calcul_length_map(char *string);
int 		calcul_length_x(char *string);
int			parse_format(char *string);
t_map		*fdf_parse_map(char *path, int file_descriptor);
void		init_fdf(void);

int			get_grid_w(int *tab, int len);
int			get_grid_h(int *tab, int len);
void		isometric_cords_center(t_iso *iso);
t_iso		*get_isometric_cords(t_point *pts);


char			*trim_this_fucking_string_for_toto(char *string);
int				ft_get_the_cl_for_toto_l_abricot(char *newString);
void		error_exit(void);
void		error_handler(char *string, int type);
void		error_usage(void);

int			hook_keys(int keycode, t_fdf *fdf);
void		hook_color(int keycode, t_fdf *fdf);
void		hook_pov(int keycode, t_fdf *fdf);
void		hook_moving(int keycode, t_fdf *fdf);
void 		hook_exit(t_fdf *fdf);
void		hook_zoom(int keycode, t_fdf *fdf);

void			print_grid_points(void *mlx, void *win, t_iso *iso);
unsigned int	ft_color(int z);

t_iso		*iso_new(int len, int *px_x, int *px_y);
t_map		*map_new(void);
t_point		*points_new(int len);

void			ft_create_image(t_fdf *e, int n);
void			ft_pixel_to_image(t_fdf *fdf, int x, int y, int z);
void			ft_tracer_pixel_a_to_z(t_fdf *fdf);
void			ft_tracer_pixel_z_to_a(t_fdf *fdf);

#endif

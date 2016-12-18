/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors_handler.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fciprian <fciprian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 10:08:39 by fciprian          #+#    #+#             */
/*   Updated: 2016/12/15 11:51:14 by thgeorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fdf.h"

/*
**			error_exit(void) | quitte le programme.
*/

void		error_exit(void)
{
	exit(-1);
}

/*
**			error_handler(char *string, int type) | retourne un message d'erreur en fonction
**			des parametres et du type de message (perror ou non)
*/

void		error_handler(char *string, int type)
{
	if (string == NULL && !type)
		error_exit();
	if (string && !type)
	{
		ft_putstr_fd(string, 2);
		error_exit();
	}
	if (!string && type)
	{
		perror("Error :");
		error_exit();
	}
}

/*
**			error_usage(void) | retour d'une erreur d'usage du FdF
*/

void		error_usage(void)
{
	ft_putstr_fd("Usage : ./fdf [map file]", 2);
	error_exit();
}

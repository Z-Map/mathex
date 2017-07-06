/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matd_rotx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 13:15:34 by qloubier          #+#    #+#             */
/*   Updated: 2016/11/25 05:03:10 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/matrix.h"
#include <math.h>

mattd				*pmattd_rotx(mattd *mat, double rad)
{
	mattd			rot;

	rot = nmattd_rotx(rad);
	return (pmattd_multiply(mat, &rot));
}

mattd				mattd_rotx(mattd mat, double rad)
{
	mattd			rot;

	rot = nmattd_rotx(rad);
	pmattd_multiply(&mat, &rot);
	return (mat);
}

mattd				nmattd_rotx(double rad)
{
	const double		c = cos(rad);
	const double		s = sin(rad);

	return ((mattd){
		(v3d){ 1.0, 0.0, 0.0},
		(v3d){ 0.0, c, s},
		(v3d){ 0.0, -s, c},
		(v3d){ 0.0, 0.0, 0.0},
		(v4d){ 0.0, 0.0, 0.0, 1.0}});
}

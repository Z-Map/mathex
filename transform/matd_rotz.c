/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matd_rotz.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 14:20:59 by qloubier          #+#    #+#             */
/*   Updated: 2016/11/25 05:03:10 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/matrix.h"
#include <math.h>

mattd				*pmattd_rotz(mattd *mat, double rad)
{
	mattd			rot;

	rot = nmattd_rotz(rad);
	return (pmattd_multiply(mat, &rot));
}

mattd				mattd_rotz(mattd mat, double rad)
{
	mattd			rot;

	rot = nmattd_rotz(rad);
	pmattd_multiply(&mat, &rot);
	return (mat);
}

mattd				nmattd_rotz(double rad)
{
	const double		c = cos(rad);
	const double		s = sin(rad);

	return ((mattd){
		(v3d){ c, s, 0.0},
		(v3d){ -s, c, 0.0},
		(v3d){ 0.0, 0.0, 1.0},
		(v3d){ 0.0, 0.0, 0.0},
		(v4d){ 0.0, 0.0, 0.0, 1.0}});
}

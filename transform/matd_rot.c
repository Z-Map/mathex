/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matd_rot.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 14:27:24 by qloubier          #+#    #+#             */
/*   Updated: 2017/02/22 15:20:35 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/matrix.h"
#include <math.h>

mattd				*pmattd_rot(mattd *mat, v3d vrad)
{
	mattd			rot;

	rot = nmattd_rot(vrad);
	return (pmattd_multiply(mat, &rot));
}

mattd				mattd_rot(mattd mat, v3d vrad)
{
	mattd			rot;

	rot = nmattd_rot(vrad);
	pmattd_multiply(&mat, &rot);
	return (mat);
}

mattd				nmattd_rot(v3d vrad)
{
	const v3d		c = (v3d){cos(vrad.x), cos(vrad.y), cos(vrad.z)};
	const v3d		s = (v3d){sin(vrad.x), sin(vrad.y), sin(vrad.z)};
	const double	sxsz = s.x * s.z;
	const double	sycz = s.y * c.z;

	return ((mattd){
		(v3d){ (c.y * c.z) - (s.y * sxsz), -s.z * c.x, sycz + (c.y * sxsz)},
		(v3d){ (s.z * c.y) + (s.y * s.x * c.z), c.z * c.x,
			(s.y * s.z) - (c.y * s.x * c.z)},
			(v3d){ -s.y * c.x, s.x, c.x * c.y},
			(v3d){ 0.0, 0.0, 0.0},
			(v4d){ 0.0, 0.0, 0.0, 1.0}});
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matf_rot.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 14:27:24 by qloubier          #+#    #+#             */
/*   Updated: 2016/11/25 04:42:33 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/matrix.h"
#include <math.h>

mattf				*pmattf_rot(mattf *mat, v3f vrad)
{
	mattf			rot;

	rot = nmattf_rot(vrad);
	return (pmattf_multiply(mat, &rot));
}

mattf				mattf_rot(mattf mat, v3f vrad)
{
	mattf			rot;

	rot = nmattf_rot(vrad);
	pmattf_multiply(&mat, &rot);
	return (mat);
}

mattf				nmattf_rot(v3f vrad)
{
	const v3f		c = (v3f){cosf(vrad.x), cosf(vrad.y), cosf(vrad.z)};
	const v3f		s = (v3f){sinf(vrad.x), sinf(vrad.y), sinf(vrad.z)};
	const float		sxsz = s.x * s.z;
	const float		sycz = s.y * c.z;

	return ((mattf){
		(v3f){ (c.y * c.z) - (s.y * sxsz), -s.z * c.x, sycz + (c.y * sxsz)},
		(v3f){ (s.z * c.y) + (s.y * s.x * c.z), c.z * c.x,
			(s.y * s.z) - (c.y * s.x * c.z)},
			(v3f){ -s.y * c.x, s.x, c.x * c.y},
			(v3f){ 0.0f, 0.0f, 0.0f},
			(v4f){ 0.0f, 0.0f, 0.0f, 1.0f}});
}

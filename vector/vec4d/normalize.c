/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 19:33:16 by qloubier          #+#    #+#             */
/*   Updated: 2019/05/28 17:27:44 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "mathex/vector.h"

t_v4d				normalized4d(t_v4d v)
{
	const double	vxx = (v.x * v.x);
	const double	vyy = (v.y * v.y);
	const double	vzz = (v.z * v.z);
	const double	nor = sqrt(vxx + vyy + vzz + (v.w * v.w));

	return ((t_v4d){v.x / nor, v.y / nor, v.z / nor, v.w / nor});
}

t_v4d				*normalize4d(t_v4d *v)
{
	const double	vxx = (v->x * v->x);
	const double	vyy = (v->y * v->y);
	const double	vzz = (v->z * v->z);
	const double	nor = sqrt(vxx + vyy + vzz + (v->w * v->w));

	*v = (t_v4d){v->x / nor, v->y / nor, v->z / nor, v->w / nor};
	return (v);
}

t_v4d				normlen4d(t_v4d v, double *nor)
{
	*nor = sqrt((v.x * v.x) + (v.y * v.y) + (v.z * v.z) + (v.w * v.w));
	return ((t_v4d){v.x / *nor, v.y / *nor, v.z / *nor, v.w / *nor});
}

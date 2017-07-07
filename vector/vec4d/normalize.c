/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 19:33:16 by qloubier          #+#    #+#             */
/*   Updated: 2017/07/07 09:21:23 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "mathex/vector.h"

v4d				normalized4d(v4d v)
{
	const double		nor = sqrt((v.x * v.x) + (v.y * v.y) + (v.z * v.z)
		+ (v.w * v.w));

	return ((v4d){v.x / nor, v.y / nor, v.z / nor, v.w / nor});
}

v4d				*normalize4d(v4d *v)
{
	const double		nor = sqrt((v->x * v->x) + (v->y * v->y)
		+ (v->z * v->z) + (v->w * v->w));

	*v = (v4d){v->x / nor, v->y / nor, v->z / nor, v->w / nor};
	return (v);
}

v4d				normlen4d(v4d v, double *nor)
{
	*nor = sqrt((v.x * v.x) + (v.y * v.y) + (v.z * v.z) + (v.w * v.w));
	return ((v4d){v.x / *nor, v.y / *nor, v.z / *nor, v.w / *nor});
}

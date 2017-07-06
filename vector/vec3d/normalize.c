/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 19:48:18 by qloubier          #+#    #+#             */
/*   Updated: 2017/06/02 21:54:38 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "mathex/vector.h"

v3d				normalized3d(v3d v)
{
	const double	nor = sqrt((v.x * v.x) + (v.y * v.y) + (v.z * v.z));

	return ((v3d){v.x / nor, v.y / nor, v.z / nor});
}

v3d				*normalize3d(v3d *v)
{
	const double	nor = sqrt((v->x * v->x) + (v->y * v->y) + (v->z * v->z));

	*v = (v3d){v->x / nor, v->y / nor, v->z / nor};
	return (v);
}

v3d				normlen3d(v3d v, double *nor)
{
	*nor = sqrt((v.x * v.x) + (v.y * v.y) + (v.z * v.z));
	return ((v3d){v.x / *nor, v.y / *nor, v.z / *nor});
}

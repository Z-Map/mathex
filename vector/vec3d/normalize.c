/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 19:48:18 by qloubier          #+#    #+#             */
/*   Updated: 2019/05/28 16:47:43 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "mathex/vector.h"

t_v3d				normalized3d(t_v3d v)
{
	const double	nor = sqrt((v.x * v.x) + (v.y * v.y) + (v.z * v.z));

	return ((t_v3d){v.x / nor, v.y / nor, v.z / nor});
}

t_v3d				*normalize3d(t_v3d *v)
{
	const double	nor = sqrt((v->x * v->x) + (v->y * v->y) + (v->z * v->z));

	*v = (t_v3d){v->x / nor, v->y / nor, v->z / nor};
	return (v);
}

t_v3d				normlen3d(t_v3d v, double *nor)
{
	*nor = sqrt((v.x * v.x) + (v.y * v.y) + (v.z * v.z));
	return ((t_v3d){v.x / *nor, v.y / *nor, v.z / *nor});
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 19:39:22 by qloubier          #+#    #+#             */
/*   Updated: 2017/06/02 21:51:40 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "mathex/vector.h"

v2d				normalized2d(v2d v)
{
	const double	nor = sqrt((v.x * v.x) + (v.y * v.y));

	return ((v2d){v.x / nor, v.y / nor});
}

v2d				*normalize2d(v2d *v)
{
	const double	nor = sqrt((v->x * v->x) + (v->y * v->y));

	*v = (v2d){v->x / nor, v->y / nor};
	return (v);
}

v2d				normlen2d(v2d v, double *nor)
{
	*nor = sqrt((v.x * v.x) + (v.y * v.y));
	return ((v2d){v.x / *nor, v.y / *nor});
}

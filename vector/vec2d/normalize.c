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

t_v2d				normalized2d(t_v2d v)
{
	const double	nor = sqrt((v.x * v.x) + (v.y * v.y));

	return ((t_v2d){v.x / nor, v.y / nor});
}

t_v2d				*normalize2d(t_v2d *v)
{
	const double	nor = sqrt((v->x * v->x) + (v->y * v->y));

	*v = (t_v2d){v->x / nor, v->y / nor};
	return (v);
}

t_v2d				normlen2d(t_v2d v, double *nor)
{
	*nor = sqrt((v.x * v.x) + (v.y * v.y));
	return ((t_v2d){v.x / *nor, v.y / *nor});
}

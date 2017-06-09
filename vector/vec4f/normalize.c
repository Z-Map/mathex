/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 19:33:16 by qloubier          #+#    #+#             */
/*   Updated: 2017/06/09 09:40:43 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "mathex/vector.h"

t_v4f				normalized4f(t_v4f v)
{
	const float		nor = sqrtf((v.x * v.x) + (v.y * v.y) + (v.z * v.z)
		+ (v.w * v.w));

	return ((t_v4f){v.x / nor, v.y / nor, v.z / nor, v.w / nor});
}

t_v4f				*normalize4f(t_v4f *v)
{
	const float		nor = sqrtf((v->x * v->x) + (v->y * v->y) + (v->z * v->z)
		+ (v->w * v->w));

	*v = (t_v4f){v->x / nor, v->y / nor, v->z / nor, v->w / nor};
	return (v);
}

t_v4f				normlen4f(t_v4f v, float *nor)
{
	*nor = sqrtf((v.x * v.x) + (v.y * v.y) + (v.z * v.z) + (v.w * v.w));
	return ((t_v4f){v.x / *nor, v.y / *nor, v.z / *nor, v.w / *nor});
}

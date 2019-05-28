/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 19:33:16 by qloubier          #+#    #+#             */
/*   Updated: 2019/05/28 17:32:51 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "mathex/vector.h"

t_v4f				normalized4f(t_v4f v)
{
	const float		vxx = (v.x * v.x);
	const float		vyy = (v.y * v.y);
	const float		vzz = (v.z * v.z);
	const float		nor = sqrtf(vxx + vyy + vzz + (v.w * v.w));

	return ((t_v4f){v.x / nor, v.y / nor, v.z / nor, v.w / nor});
}

t_v4f				*normalize4f(t_v4f *v)
{
	const float		vxx = (v->x * v->x);
	const float		vyy = (v->y * v->y);
	const float		vzz = (v->z * v->z);
	const float		nor = sqrtf(vxx + vyy + vzz + (v->w * v->w));

	*v = (t_v4f){v->x / nor, v->y / nor, v->z / nor, v->w / nor};
	return (v);
}

t_v4f				normlen4f(t_v4f v, float *nor)
{
	*nor = sqrtf((v.x * v.x) + (v.y * v.y) + (v.z * v.z) + (v.w * v.w));
	return ((t_v4f){v.x / *nor, v.y / *nor, v.z / *nor, v.w / *nor});
}

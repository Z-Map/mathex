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

v4f				normalized4f(v4f v)
{
	const float		nor = sqrtf((v.x * v.x) + (v.y * v.y) + (v.z * v.z)
		+ (v.w * v.w));

	return ((v4f){v.x / nor, v.y / nor, v.z / nor, v.w / nor});
}

v4f				*normalize4f(v4f *v)
{
	const float		nor = sqrtf((v->x * v->x) + (v->y * v->y) + (v->z * v->z)
		+ (v->w * v->w));

	*v = (v4f){v->x / nor, v->y / nor, v->z / nor, v->w / nor};
	return (v);
}

v4f				normlen4f(v4f v, float *nor)
{
	*nor = sqrtf((v.x * v.x) + (v.y * v.y) + (v.z * v.z) + (v.w * v.w));
	return ((v4f){v.x / *nor, v.y / *nor, v.z / *nor, v.w / *nor});
}

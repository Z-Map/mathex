/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 19:33:16 by qloubier          #+#    #+#             */
/*   Updated: 2017/06/02 21:55:34 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "mathex/vector.h"

v3f				normalized3f(v3f v)
{
	const float		nor = sqrtf((v.x * v.x) + (v.y * v.y) + (v.z * v.z));

	return ((v3f){v.x / nor, v.y / nor, v.z / nor});
}

v3f				*normalize3f(v3f *v)
{
	const float		nor = sqrtf((v->x * v->x) + (v->y * v->y) + (v->z * v->z));

	*v = (v3f){v->x / nor, v->y / nor, v->z / nor};
	return (v);
}

v3f				normlen3f(v3f v, float *nor)
{
	*nor = sqrtf((v.x * v.x) + (v.y * v.y) + (v.z * v.z));
	return ((v3f){v.x / *nor, v.y / *nor, v.z / *nor});
}

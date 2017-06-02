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

t_v3f				normalized3f(t_v3f v)
{
	const float		nor = sqrtf((v.x * v.x) + (v.y * v.y) + (v.z * v.z));

	return ((t_v3f){v.x / nor, v.y / nor, v.z / nor});
}

t_v3f				*normalize3f(t_v3f *v)
{
	const float		nor = sqrtf((v->x * v->x) + (v->y * v->y) + (v->z * v->z));

	*v = (t_v3f){v->x / nor, v->y / nor, v->z / nor};
	return (v);
}

t_v3f				normlen3f(t_v3f v, float *nor)
{
	*nor = sqrtf((v.x * v.x) + (v.y * v.y) + (v.z * v.z));
	return ((t_v3f){v.x / *nor, v.y / *nor, v.z / *nor});
}

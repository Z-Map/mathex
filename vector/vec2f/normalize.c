/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 19:39:22 by qloubier          #+#    #+#             */
/*   Updated: 2017/06/02 21:53:09 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "mathex/vector.h"

v2f				normalized2f(v2f v)
{
	const float		nor = sqrtf((v.x * v.x) + (v.y * v.y));

	return ((v2f){v.x / nor, v.y / nor});
}

v2f				*normalize2f(v2f *v)
{
	const float		nor = sqrtf((v->x * v->x) + (v->y * v->y));

	*v = (v2f){v->x / nor, v->y / nor};
	return (v);
}

v2f				normlen2f(v2f v, float *nor)
{
	*nor = sqrtf((v.x * v.x) + (v.y * v.y));
	return ((v2f){v.x / *nor, v.y / *nor});
}

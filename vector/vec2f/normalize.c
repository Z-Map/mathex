/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 19:39:22 by qloubier          #+#    #+#             */
/*   Updated: 2017/06/02 19:54:47 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "mathex/vector.h"

t_v2f				normalize2f(t_v2f v)
{
	const float		nor = sqrtf((v.x * v.x) + (v.y * v.y));

	return ((t_v2f){v.x / nor, v.y / nor});
}

t_v2f				normlen2f(t_v2f v, float *nor)
{
	*nor = sqrtf((v.x * v.x) + (v.y * v.y));
	return ((t_v2f){v.x / *nor, v.y / *nor});
}

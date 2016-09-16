/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/21 02:27:34 by qloubier          #+#    #+#             */
/*   Updated: 2016/02/21 02:41:58 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include <math.h>

t_v2f					normalize2d(t_v2f v)
{
	float	nor;

	nor = sqrtf((v.x * v.x) + (v.y * v.y));
	return ((t_v2f){v.x / nor, v.y / nor});
}

t_v3f					normalize3d(t_v3f v)
{
	float	nor;

	nor = sqrtf((v.x * v.x) + (v.y * v.y));
	nor = sqrtf((v.z * v.z) + (nor * nor));
	return ((t_v3f){v.x / nor, v.y / nor, v.z / nor});
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matf_rotz.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 14:20:59 by qloubier          #+#    #+#             */
/*   Updated: 2016/11/25 04:42:56 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/matrix.h"
#include <math.h>

mattf				*pmattf_rotz(mattf *mat, float rad)
{
	mattf			rot;

	rot = nmattf_rotz(rad);
	return (pmattf_multiply(mat, &rot));
}

mattf				mattf_rotz(mattf mat, float rad)
{
	mattf			rot;

	rot = nmattf_rotz(rad);
	pmattf_multiply(&mat, &rot);
	return (mat);
}

mattf				nmattf_rotz(float rad)
{
	const float		c = cosf(rad);
	const float		s = sinf(rad);

	return ((mattf){
		(v3f){ c, s, 0.0f},
		(v3f){ -s, c, 0.0f},
		(v3f){ 0.0f, 0.0f, 1.0f},
		(v3f){ 0.0f, 0.0f, 0.0f},
		(v4f){ 0.0f, 0.0f, 0.0f, 1.0f}});
}

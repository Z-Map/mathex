/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matf_roty.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 14:08:09 by qloubier          #+#    #+#             */
/*   Updated: 2016/11/25 04:42:50 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/matrix.h"
#include <math.h>

mattf				*pmattf_roty(mattf *mat, float rad)
{
	mattf			rot;

	rot = nmattf_roty(rad);
	return (pmattf_multiply(mat, &rot));
}

mattf				mattf_roty(mattf mat, float rad)
{
	mattf			rot;

	rot = nmattf_roty(rad);
	pmattf_multiply(&mat, &rot);
	return (mat);
}

mattf				nmattf_roty(float rad)
{
	const float			c = cosf(rad);
	const float			s = sinf(rad);

	return ((mattf){
		(v3f){ c, 0.0f, -s},
		(v3f){ 0.0f, 1.0f, 0.0f},
		(v3f){ s, 0.0f, c},
		(v3f){ 0.0f, 0.0f, 0.0f},
		(v4f){ 0.0f, 0.0f, 0.0f, 1.0f}});
}

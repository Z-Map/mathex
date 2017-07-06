/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matf_rotx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 13:15:34 by qloubier          #+#    #+#             */
/*   Updated: 2016/11/25 04:42:44 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/matrix.h"
#include <math.h>

mattf				*pmattf_rotx(mattf *mat, float rad)
{
	mattf			rot;

	rot = nmattf_rotx(rad);
	return (pmattf_multiply(mat, &rot));
}

mattf				mattf_rotx(mattf mat, float rad)
{
	mattf			rot;

	rot = nmattf_rotx(rad);
	pmattf_multiply(&mat, &rot);
	return (mat);
}

mattf				nmattf_rotx(float rad)
{
	const float		c = cosf(rad);
	const float		s = sinf(rad);

	return ((mattf){
		(v3f){ 1.0f, 0.0f, 0.0f},
		(v3f){ 0.0f, c, s},
		(v3f){ 0.0f, -s, c},
		(v3f){ 0.0f, 0.0f, 0.0f},
		(v4f){ 0.0f, 0.0f, 0.0f, 1.0f}});
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matf_rotz.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 14:20:59 by qloubier          #+#    #+#             */
/*   Updated: 2019/05/28 17:49:05 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/matrix.h"
#include <math.h>

t_mattf				*pmattf_rotz(t_mattf *mat, float rad)
{
	t_mattf			rot;

	rot = nmattf_rotz(rad);
	return (pmattf_multiply(mat, &rot));
}

t_mattf				mattf_rotz(t_mattf mat, float rad)
{
	t_mattf			rot;

	rot = nmattf_rotz(rad);
	pmattf_multiply(&mat, &rot);
	return (mat);
}

t_mattf				nmattf_rotz(float rad)
{
	const float		c = cosf(rad);
	const float		s = sinf(rad);

	return ((t_mattf){
		(t_v3f){ c, s, 0.0f},
		(t_v3f){ -s, c, 0.0f},
		(t_v3f){ 0.0f, 0.0f, 1.0f},
		(t_v3f){ 0.0f, 0.0f, 0.0f},
		(t_v4f){ 0.0f, 0.0f, 0.0f, 1.0f}});
}

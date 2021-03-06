/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lerpf.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/19 10:56:22 by qloubier          #+#    #+#             */
/*   Updated: 2017/06/19 11:37:28 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/utils.h"

float			mxlerp(float a, float b, float coef)
{
	return (a + ((b - a) * coef));
}

float			mxbilerp(float v[4], float coef[2])
{
	float		a;
	float		b;

	a = v[0] + ((v[1] - v[0]) * coef[0]);
	b = v[2] + ((v[3] - v[2]) * coef[0]);
	return (a + ((b - a) * coef[1]));
}

float			mxtrilerp(float v[8], float coef[3])
{
	float		a;
	float		b;
	float		c;
	float		d;

	a = v[0] + ((v[1] - v[0]) * coef[0]);
	b = v[2] + ((v[3] - v[2]) * coef[0]);
	c = v[4] + ((v[5] - v[4]) * coef[0]);
	d = v[6] + ((v[7] - v[6]) * coef[0]);
	a = a + ((b - a) * coef[1]);
	b = c + ((d - c) * coef[1]);
	return (a + ((b - a) * coef[2]));
}

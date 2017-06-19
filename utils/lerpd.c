/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lerpd.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/19 10:56:22 by qloubier          #+#    #+#             */
/*   Updated: 2017/06/19 11:38:17 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/utils.h"

double			mxlerpd(double a, double b, double coef)
{
	return (a + ((b - a) * coef));
}

double			mxbilerpd(double v[4], double coef[2])
{
	double		a;
	double		b;

	a = v[0] + ((v[1] - v[0]) * coef[0]);
	b = v[2] + ((v[3] - v[2]) * coef[0]);
	return (a + ((b - a) * coef[1]));
}

double			mxtrilerpd(double v[8], double coef[3])
{
	double		a;
	double		b;
	double		c;
	double		d;

	a = v[0] + ((v[1] - v[0]) * coef[0]);
	b = v[2] + ((v[3] - v[2]) * coef[0]);
	c = v[4] + ((v[5] - v[4]) * coef[0]);
	d = v[6] + ((v[7] - v[6]) * coef[0]);
	a = a + ((b - a) * coef[1]);
	b = c + ((d - c) * coef[1]);
	return (a + ((b - a) * coef[2]));
}

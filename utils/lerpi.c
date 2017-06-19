/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lerpi.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/19 10:56:22 by qloubier          #+#    #+#             */
/*   Updated: 2017/06/19 11:38:02 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/utils.h"

int				mxlerpi(int a, int b, float coef)
{
	return (a + (int)((float)(b - a) * coef));
}

int				mxbilerpi(int v[4], float coef[2])
{
	int			a;
	int			b;

	a = v[0] + (int)((float)(v[1] - v[0]) * coef[0]);
	b = v[2] + (int)((float)(v[3] - v[2]) * coef[0]);
	return (a + (int)((float)(b - a) * coef[1]));
}

int				mxtrilerpi(int v[8], float coef[3])
{
	int			a;
	int			b;
	int			c;
	int			d;

	a = v[0] + (int)((float)(v[1] - v[0]) * coef[0]);
	b = v[2] + (int)((float)(v[3] - v[2]) * coef[0]);
	c = v[4] + (int)((float)(v[5] - v[4]) * coef[0]);
	d = v[6] + (int)((float)(v[7] - v[6]) * coef[0]);
	a = a + (int)((float)(b - a) * coef[1]);
	b = c + (int)((float)(d - c) * coef[1]);
	return (a + (int)((float)(b - a) * coef[2]));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mul4f.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 01:06:47 by qloubier          #+#    #+#             */
/*   Updated: 2017/07/06 16:46:52 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

v4d					v4dmulv4f(v4d a, v4f b)
{
	return ((v4d){ a.x * (double)(b.x),
		a.y * (double)b.y,
		a.z * (double)b.z,
		a.w * (double)b.w});
}

v4d					*pv4dmulv4f(v4d *a, const v4f b)
{
	a->x *= (double)b.x;
	a->y *= (double)b.y;
	a->z *= (double)b.z;
	a->w *= (double)b.w;
	return (a);
}

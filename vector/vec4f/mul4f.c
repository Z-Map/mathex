/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mul4f.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 01:06:47 by qloubier          #+#    #+#             */
/*   Updated: 2017/06/09 09:38:01 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

v4f					v4fmulv4f(v4f a, v4f b)
{
	return ((v4f){ a.x * (float)(b.x),
		a.y * b.y,
		a.z * b.z,
		a.w * b.w});
}

v4f					*pv4fmulv4f(v4f *a, const v4f b)
{
	a->x *= b.x;
	a->y *= b.y;
	a->z *= b.z;
	a->w *= b.w;
	return (a);
}

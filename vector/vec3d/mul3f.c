/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mul3f.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 01:06:47 by qloubier          #+#    #+#             */
/*   Updated: 2017/05/25 00:55:32 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

v3d					v3dmulv3f(v3d a, v3f b)
{
	return ((v3d){ a.x * (double)(b.x),
		a.y * (double)(b.y),
		a.z * (double)(b.z)});
}

v3d					*pv3dmulv3f(v3d *a, const v3f b)
{
	a->x *= (double)(b.x);
	a->y *= (double)(b.y);
	a->z *= (double)(b.z);
	return (a);
}

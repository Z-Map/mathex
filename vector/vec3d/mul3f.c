/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mul3f.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 01:06:47 by qloubier          #+#    #+#             */
/*   Updated: 2019/05/28 17:53:55 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

t_v3d					v3dmulv3f(t_v3d a, t_v3f b)
{
	return ((t_v3d){ a.x * (double)(b.x),
		a.y * (double)(b.y),
		a.z * (double)(b.z)});
}

t_v3d					*pv3dmulv3f(t_v3d *a, const t_v3f b)
{
	a->x *= (double)(b.x);
	a->y *= (double)(b.y);
	a->z *= (double)(b.z);
	return (a);
}

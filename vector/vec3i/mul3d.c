/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mul3d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 01:06:47 by qloubier          #+#    #+#             */
/*   Updated: 2019/05/28 17:53:55 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

t_v3i					v3imulv3d(t_v3i a, t_v3d b)
{
	return ((t_v3i){ a.x * (int)(b.x),
		a.y * (int)(b.y),
		a.z * (int)(b.z)});
}

t_v3i					*pv3imulv3d(t_v3i *a, const t_v3d b)
{
	a->x *= (int)(b.x);
	a->y *= (int)(b.y);
	a->z *= (int)(b.z);
	return (a);
}

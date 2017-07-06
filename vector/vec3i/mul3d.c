/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mul3d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 01:06:47 by qloubier          #+#    #+#             */
/*   Updated: 2017/05/25 01:19:38 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

v3i					v3imulv3d(v3i a, v3d b)
{
	return ((v3i){ a.x * (int)(b.x),
		a.y * (int)(b.y),
		a.z * (int)(b.z)});
}

v3i					*pv3imulv3d(v3i *a, const v3d b)
{
	a->x *= (int)(b.x);
	a->y *= (int)(b.y);
	a->z *= (int)(b.z);
	return (a);
}

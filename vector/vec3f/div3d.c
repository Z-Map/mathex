/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   div3d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 01:12:31 by qloubier          #+#    #+#             */
/*   Updated: 2017/05/25 01:01:35 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

v3f					v3fdivv3d(v3f a, v3d b)
{
	return ((v3f){ a.x / (float)b.x, a.y / (float)b.y, a.z / (float)b.z});
}

v3f					*pv3fdivv3d(v3f *a, const v3d b)
{
	a->x /= (float)b.x;
	a->y /= (float)b.y;
	a->z /= (float)b.z;
	return (a);
}

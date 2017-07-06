/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sub4d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 01:12:31 by qloubier          #+#    #+#             */
/*   Updated: 2017/06/09 09:41:17 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

v4f					v4fsubv4d(v4f a, v4d b)
{
	return ((v4f){ a.x - (float)b.x, a.y - (float)b.y, a.z - (float)b.z,
		a.w - (float)b.w});
}

v4f					*pv4fsubv4d(v4f *a, const v4d b)
{
	a->x -= (float)b.x;
	a->y -= (float)b.y;
	a->z -= (float)b.z;
	a->w -= (float)b.w;
	return (a);
}

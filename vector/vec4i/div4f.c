/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   div4f.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 01:12:31 by qloubier          #+#    #+#             */
/*   Updated: 2017/07/06 14:39:08 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

v4i					v4idivv4f(v4i a, v4f b)
{
	return ((v4i){ a.x / (int)b.x, a.y / (int)b.y,
		a.z / (int)b.z, a.w / (int)b.w});
}

v4i					*pv4idivv4f(v4i *a, const v4f b)
{
	a->x /= (int)b.x;
	a->y /= (int)b.y;
	a->z /= (int)b.z;
	a->w /= (int)b.w;
	return (a);
}

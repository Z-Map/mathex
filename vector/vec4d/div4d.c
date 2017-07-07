/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   div4d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 01:12:31 by qloubier          #+#    #+#             */
/*   Updated: 2017/06/09 09:34:53 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

v4d					v4ddivv4d(v4d a, v4d b)
{
	return ((v4d){ a.x / (double)b.x, a.y / (double)b.y, a.z / (double)b.z,
		 a.w / (double)b.w});
}

v4d					*pv4ddivv4d(v4d *a, const v4d b)
{
	a->x /= (double)b.x;
	a->y /= (double)b.y;
	a->z /= (double)b.z;
	a->w /= (double)b.w;
	return (a);
}

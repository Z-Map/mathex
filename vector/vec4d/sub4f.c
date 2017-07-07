/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sub4f.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 01:12:31 by qloubier          #+#    #+#             */
/*   Updated: 2017/07/06 16:47:08 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

v4d					v4dsubv4f(v4d a, v4f b)
{
	return ((v4d){ a.x - (double)b.x, a.y - (double)b.y,
		a.z - (double)b.z, a.w - (double)b.w});
}

v4d					*pv4dsubv4f(v4d *a, const v4f b)
{
	a->x -= (double)b.x;
	a->y -= (double)b.y;
	a->z -= (double)b.z;
	a->w -= (double)b.w;
	return (a);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   div4d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 01:12:31 by qloubier          #+#    #+#             */
/*   Updated: 2019/05/28 17:52:30 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

t_v4d					v4ddivv4d(t_v4d a, t_v4d b)
{
	return ((t_v4d){ a.x / (double)b.x, a.y / (double)b.y, a.z / (double)b.z,
		a.w / (double)b.w});
}

t_v4d					*pv4ddivv4d(t_v4d *a, const t_v4d b)
{
	a->x /= (double)b.x;
	a->y /= (double)b.y;
	a->z /= (double)b.z;
	a->w /= (double)b.w;
	return (a);
}

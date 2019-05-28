/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sub4i.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 01:12:31 by qloubier          #+#    #+#             */
/*   Updated: 2019/05/28 17:53:55 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

t_v4d					v4dsubv4i(t_v4d a, t_v4i b)
{
	return ((t_v4d){ a.x - (double)b.x, a.y - (double)b.y, a.z - (double)b.z,
		a.w - (double)b.w});
}

t_v4d					*pv4dsubv4i(t_v4d *a, const t_v4i b)
{
	a->x -= (double)b.x;
	a->y -= (double)b.y;
	a->z -= (double)b.z;
	a->w -= (double)b.w;
	return (a);
}

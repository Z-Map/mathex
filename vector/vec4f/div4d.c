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

t_v4f					v4fdivv4d(t_v4f a, t_v4d b)
{
	return ((t_v4f){ a.x / (float)b.x, a.y / (float)b.y, a.z / (float)b.z,
		 a.w / (float)b.w});
}

t_v4f					*pv4fdivv4d(t_v4f *a, const t_v4d b)
{
	a->x /= (float)b.x;
	a->y /= (float)b.y;
	a->z /= (float)b.z;
	a->w /= (float)b.w;
	return (a);
}

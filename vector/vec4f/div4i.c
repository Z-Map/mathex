/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   div4i.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 01:12:31 by qloubier          #+#    #+#             */
/*   Updated: 2019/05/28 17:52:30 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

t_v4f					v4fdivv4i(t_v4f a, t_v4i b)
{
	return ((t_v4f){ a.x / (float)b.x, a.y / (float)b.y, a.z / (float)b.z,
		a.w / (float)b.w});
}

t_v4f					*pv4fdivv4i(t_v4f *a, const t_v4i b)
{
	a->x /= (float)b.x;
	a->y /= (float)b.y;
	a->z /= (float)b.z;
	a->w /= (float)b.w;
	return (a);
}

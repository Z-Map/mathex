/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add4d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 01:06:47 by qloubier          #+#    #+#             */
/*   Updated: 2019/05/28 17:52:30 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

t_v4i					v4iaddv4d(t_v4i a, t_v4d b)
{
	return ((t_v4i){ a.x + (int)(b.x),
		a.y + (int)(b.y),
		a.z + (int)(b.z),
		a.w + (int)(b.w)});
}

t_v4i					*pv4iaddv4d(t_v4i *a, const t_v4d b)
{
	a->x += (int)(b.x);
	a->y += (int)(b.y);
	a->z += (int)(b.z);
	a->w += (int)(b.w);
	return (a);
}

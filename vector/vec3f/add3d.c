/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add3d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 01:06:47 by qloubier          #+#    #+#             */
/*   Updated: 2019/05/28 17:53:55 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

t_v3f					v3faddv3d(t_v3f a, t_v3d b)
{
	return ((t_v3f){ a.x + (float)(b.x),
		a.y + (float)(b.y),
		a.z + (float)(b.z)});
}

t_v3f					*pv3faddv3d(t_v3f *a, const t_v3d b)
{
	a->x += (float)(b.x);
	a->y += (float)(b.y);
	a->z += (float)(b.z);
	return (a);
}

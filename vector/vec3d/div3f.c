/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   div3f.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 01:12:31 by qloubier          #+#    #+#             */
/*   Updated: 2017/05/25 00:55:42 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

t_v3d					v3ddivv3f(t_v3d a, t_v3f b)
{
	return ((t_v3d){ a.x / (double)b.x, a.y / (double)b.y, a.z / (double)b.z});
}

t_v3d					*pv3ddivv3f(t_v3d *a, const t_v3f *b)
{
	a->x /= (double)b->x;
	a->y /= (double)b->y;
	a->z /= (double)b->z;
	return (a);
}

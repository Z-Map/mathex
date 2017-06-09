/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add4f.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 01:06:47 by qloubier          #+#    #+#             */
/*   Updated: 2017/06/09 09:33:53 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

t_v4f					v4faddv4f(t_v4f a, t_v4f b)
{
	return ((t_v4f){ a.x + b.x,
		a.y + b.y,
		a.z + b.z,
		a.w + b.w});
}

t_v4f					*pv4faddv4f(t_v4f *a, const t_v4f b)
{
	a->x += b.x;
	a->y += b.y;
	a->z += b.z;
	a->w += b.w;
	return (a);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sub4f.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 01:12:31 by qloubier          #+#    #+#             */
/*   Updated: 2017/06/09 09:41:49 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

v4f					v4fsubv4f(v4f a, v4f b)
{
	return ((v4f){ a.x - b.x, a.y - b.y, a.z - b.z, a.w - b.w});
}

v4f					*pv4fsubv4f(v4f *a, const v4f b)
{
	a->x -= b.x;
	a->y -= b.y;
	a->z -= b.z;
	a->w -= b.w;
	return (a);
}

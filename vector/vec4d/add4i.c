/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add4i.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 01:06:47 by qloubier          #+#    #+#             */
/*   Updated: 2017/06/09 09:34:00 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

v4d					v4daddv4i(v4d a, v4i b)
{
	return ((v4d){ a.x + (double)(b.x),
		a.y + (double)(b.y),
		a.z + (double)(b.z),
		a.w + (double)(b.w)});
}

v4d					*pv4daddv4i(v4d *a, const v4i b)
{
	a->x += (double)(b.x);
	a->y += (double)(b.y);
	a->z += (double)(b.z);
	a->w += (double)(b.w);
	return (a);
}

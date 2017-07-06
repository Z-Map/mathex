/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add3f.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 01:06:47 by qloubier          #+#    #+#             */
/*   Updated: 2017/05/25 00:59:20 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

v3f					v3faddv3f(v3f a, v3f b)
{
	return ((v3f){ a.x + (float)(b.x),
		a.y + (float)(b.y),
		a.z + (float)(b.z)});
}

v3f					*pv3faddv3f(v3f *a, const v3f b)
{
	a->x += b.x;
	a->y += b.y;
	a->z += b.z;
	return (a);
}

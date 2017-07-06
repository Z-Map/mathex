/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   div3i.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 01:12:31 by qloubier          #+#    #+#             */
/*   Updated: 2017/05/25 00:58:48 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

v3f					v3fdivv3i(v3f a, v3i b)
{
	return ((v3f){ a.x / (float)b.x, a.y / (float)b.y, a.z / (float)b.z});
}

v3f					*pv3fdivv3i(v3f *a, const v3i b)
{
	a->x /= (float)b.x;
	a->y /= (float)b.y;
	a->z /= (float)b.z;
	return (a);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   div3i.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 01:12:31 by qloubier          #+#    #+#             */
/*   Updated: 2017/05/25 00:51:48 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

v3d					v3ddivv3i(v3d a, v3i b)
{
	return ((v3d){ a.x / (double)b.x, a.y / (double)b.y, a.z / (double)b.z});
}

v3d					*pv3ddivv3i(v3d *a, const v3i b)
{
	a->x /= (double)b.x;
	a->y /= (double)b.y;
	a->z /= (double)b.z;
	return (a);
}

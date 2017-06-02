/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   div3d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 01:12:31 by qloubier          #+#    #+#             */
/*   Updated: 2017/05/25 00:51:53 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

t_v3d					v3ddivv3d(t_v3d a, t_v3d b)
{
	return ((t_v3d){ a.x / b.x, a.y / b.y, a.z / b.z});
}

t_v3d					*pv3ddivv3d(t_v3d *a, const t_v3d b)
{
	a->x /= b.x;
	a->y /= b.y;
	a->z /= b.z;
	return (a);
}

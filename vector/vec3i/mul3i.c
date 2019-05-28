/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mul3i.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 01:06:47 by qloubier          #+#    #+#             */
/*   Updated: 2019/05/28 17:53:55 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

t_v3i					v3imulv3i(t_v3i a, t_v3i b)
{
	return ((t_v3i){ a.x * b.x, a.y * b.y, a.z * b.z});
}

t_v3i					*pv3imulv3i(t_v3i *a, const t_v3i b)
{
	a->x *= b.x;
	a->y *= b.y;
	a->z *= b.z;
	return (a);
}

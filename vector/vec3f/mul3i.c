/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mul3i.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 01:06:47 by qloubier          #+#    #+#             */
/*   Updated: 2017/05/25 00:58:41 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

t_v3f					v3fmulv3i(t_v3f a, t_v3i b)
{
	return ((t_v3f){ a.x * (float)(b.x),
		a.y * (float)(b.y),
		a.z * (float)(b.z)});
}

t_v3f					*pv3fmulv3i(t_v3f *a, const t_v3i b)
{
	a->x *= (float)(b.x);
	a->y *= (float)(b.y);
	a->z *= (float)(b.z);
	return (a);
}

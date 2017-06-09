/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   div4f.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 01:12:31 by qloubier          #+#    #+#             */
/*   Updated: 2017/06/09 09:35:59 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

t_v4f					v4fdivv4f(t_v4f a, t_v4f b)
{
	return ((t_v4f){ a.x / b.x, a.y / b.y, a.z / b.z, a.w / b.w});
}

t_v4f					*pv4fdivv4f(t_v4f *a, const t_v4f b)
{
	a->x /= b.x;
	a->y /= b.y;
	a->z /= b.z;
	a->w /= b.w;
	return (a);
}

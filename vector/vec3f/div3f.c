/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   div3f.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 01:12:31 by qloubier          #+#    #+#             */
/*   Updated: 2017/05/25 00:59:33 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

t_v3f					v3fdivv3f(t_v3f a, t_v3f b)
{
	return ((t_v3f){ a.x / b.x, a.y / b.y, a.z / b.z});
}

t_v3f					*pv3fdivv3f(t_v3f *a, const t_v3f *b)
{
	a->x /= b->x;
	a->y /= b->y;
	a->z /= b->z;
	return (a);
}

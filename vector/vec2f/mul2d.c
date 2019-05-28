/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mul2d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 01:06:47 by qloubier          #+#    #+#             */
/*   Updated: 2019/05/28 17:53:55 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

t_v2f					v2fmulv2d(t_v2f a, t_v2d b)
{
	return ((t_v2f){ a.x * (float)(b.x),
		a.y * (float)(b.y)});
}

t_v2f					*pv2fmulv2d(t_v2f *a, const t_v2d b)
{
	a->x *= (float)(b.x);
	a->y *= (float)(b.y);
	return (a);
}

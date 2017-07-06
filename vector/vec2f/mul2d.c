/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mul2d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 01:06:47 by qloubier          #+#    #+#             */
/*   Updated: 2017/06/11 22:28:19 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

v2f					v2fmulv2d(v2f a, v2d b)
{
	return ((v2f){ a.x * (float)(b.x),
		a.y * (float)(b.y)});
}

v2f					*pv2fmulv2d(v2f *a, const v2d b)
{
	a->x *= (float)(b.x);
	a->y *= (float)(b.y);
	return (a);
}

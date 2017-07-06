/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mul4i.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 01:06:47 by qloubier          #+#    #+#             */
/*   Updated: 2017/06/09 09:38:25 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

v4f					v4fmulv4i(v4f a, v4i b)
{
	return ((v4f){ a.x * (float)(b.x),
		a.y * (float)(b.y),
		a.z * (float)(b.z),
		a.w * (float)(b.w)});
}

v4f					*pv4fmulv4i(v4f *a, const v4i b)
{
	a->x *= (float)(b.x);
	a->y *= (float)(b.y);
	a->z *= (float)(b.z);
	a->w *= (float)(b.w);
	return (a);
}

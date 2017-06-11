/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mul2i.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 01:06:47 by qloubier          #+#    #+#             */
/*   Updated: 2017/06/11 22:30:24 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

t_v2f					v2fmulv2i(t_v2f a, t_v2i b)
{
	return ((t_v2f){ a.x * (float)(b.x),
		a.y * (float)(b.y)});
}

t_v2f					*pv2fmulv2i(t_v2f *a, const t_v2i b)
{
	a->x *= (float)(b.x);
	a->y *= (float)(b.y);
	return (a);
}
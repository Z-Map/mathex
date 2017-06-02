/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sub2f.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 01:12:31 by qloubier          #+#    #+#             */
/*   Updated: 2017/05/25 14:22:24 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

t_v2d					v2dsubv2f(t_v2d a, t_v2f b)
{
	return ((t_v2d){ a.x - (double)b.x, a.y - (double)b.y });
}

t_v2d					*pv2dsubv2f(t_v2d *a, const t_v2f *b)
{
	a->x -= (double)b->x;
	a->y -= (double)b->y;
	return (a);
}

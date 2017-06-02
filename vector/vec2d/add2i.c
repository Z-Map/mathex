/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add2i.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 01:06:47 by qloubier          #+#    #+#             */
/*   Updated: 2017/06/02 20:49:01 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

t_v2d					v2daddv2i(t_v2d a, t_v2i b)
{
	return ((t_v2d){ a.x + (double)b.x, a.y + (double)b.y });
}

t_v2d					*pv2daddv2i(t_v2d *a, const t_v2i b)
{
	a->x += (double)b.x;
	a->y += (double)b.y;
	return (a);
}

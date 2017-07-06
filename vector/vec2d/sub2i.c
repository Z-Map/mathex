/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sub2i.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 01:12:31 by qloubier          #+#    #+#             */
/*   Updated: 2017/05/25 14:16:40 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

v2d					v2dsubv2i(v2d a, v2i b)
{
	return ((v2d){ a.x - (double)b.x, a.y - (double)b.y });
}

v2d					*pv2dsubv2i(v2d *a, const v2i b)
{
	a->x -= (double)b.x;
	a->y -= (double)b.y;
	return (a);
}

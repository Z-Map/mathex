/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sub2d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 01:12:31 by qloubier          #+#    #+#             */
/*   Updated: 2017/05/25 14:32:57 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

v2f					v2fsubv2d(v2f a, v2d b)
{
	return ((v2f){ a.x - (float)b.x, a.y - (float)b.y });
}

v2f					*pv2fsubv2d(v2f *a, const v2d b)
{
	a->x -= (float)b.x;
	a->y -= (float)b.y;
	return (a);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sub2d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 01:12:31 by qloubier          #+#    #+#             */
/*   Updated: 2017/05/25 14:26:25 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

v2i					v2isubv2d(v2i a, v2d b)
{
	return ((v2i){ a.x - (int)b.x, a.y - (int)b.y });
}

v2i					*pv2isubv2d(v2i *a, const v2d b)
{
	a->x -= (int)b.x;
	a->y -= (int)b.y;
	return (a);
}

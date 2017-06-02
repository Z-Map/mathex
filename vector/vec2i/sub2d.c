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

t_v2i					v2isubv2d(t_v2i a, t_v2d b)
{
	return ((t_v2i){ a.x - (int)b.x, a.y - (int)b.y });
}

t_v2i					*pv2isubv2d(t_v2i *a, const t_v2d b)
{
	a->x -= (int)b.x;
	a->y -= (int)b.y;
	return (a);
}

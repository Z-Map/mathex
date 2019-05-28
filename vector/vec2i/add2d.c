/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add2d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 01:06:47 by qloubier          #+#    #+#             */
/*   Updated: 2019/05/28 17:53:55 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

t_v2i					v2iaddv2d(t_v2i a, t_v2d b)
{
	return ((t_v2i){ a.x + (int)b.x, a.y + (int)b.y });
}

t_v2i					*pv2iaddv2d(t_v2i *a, const t_v2d b)
{
	a->x += (int)b.x;
	a->y += (int)b.y;
	return (a);
}

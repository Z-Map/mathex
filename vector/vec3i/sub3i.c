/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sub3i.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 01:12:31 by qloubier          #+#    #+#             */
/*   Updated: 2017/05/25 01:18:29 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

t_v3i					v3isubv3i(t_v3i a, t_v3i b)
{
	return ((t_v3i){ a.x - b.x, a.y - b.y, a.z - b.z});
}

t_v3i					*pv3isubv3i(t_v3i *a, const t_v3i b)
{
	a->x -= b.x;
	a->y -= b.y;
	a->z -= b.z;
	return (a);
}

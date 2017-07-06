/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sub3f.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 01:12:31 by qloubier          #+#    #+#             */
/*   Updated: 2017/05/25 01:17:48 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

v3i					v3isubv3f(v3i a, v3f b)
{
	return ((v3i){ a.x - (int)(b.x), a.y - (int)(b.y), a.z - (int)(b.z)});
}

v3i					*pv3isubv3f(v3i *a, const v3f b)
{
	a->x -= (int)(b.x);
	a->y -= (int)(b.y);
	a->z -= (int)(b.z);
	return (a);
}

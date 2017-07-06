/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortd.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 16:03:48 by qloubier          #+#    #+#             */
/*   Updated: 2017/05/22 16:50:54 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

v2d			sortv2d(v2d a)
{
	if (a.x > a.y)
		return ((v2d){a.y, a.x});
	return (a);
}

v3d			sortv3d(v3d a)
{
	if (a.x > a.y)
		a = (v3d){a.y, a.x, a.z};
	if (a.y > a.z)
		a = (v3d){a.x, a.z, a.y};
	if (a.x > a.y)
		a = (v3d){a.y, a.x, a.z};
	return (a);
}

v4d			sortv4d(v4d a)
{
	if (a.x > a.y)
		a = (v4d){a.y, a.x, a.z, a.w};
	if (a.y > a.z)
		a = (v4d){a.x, a.z, a.y, a.w};
	if (a.z > a.w)
		a = (v4d){a.x, a.y, a.w, a.z};
	if (a.x > a.y)
		a = (v4d){a.y, a.x, a.z, a.w};
	if (a.y > a.z)
		a = (v4d){a.x, a.z, a.y, a.w};
	if (a.x > a.y)
		a = (v4d){a.y, a.x, a.z, a.w};
	return (a);
}

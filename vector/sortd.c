/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortd.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 16:03:48 by qloubier          #+#    #+#             */
/*   Updated: 2019/05/28 16:47:43 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

t_v2d			sortv2d(t_v2d a)
{
	if (a.x > a.y)
		return ((t_v2d){a.y, a.x});
	return (a);
}

t_v3d			sortv3d(t_v3d a)
{
	if (a.x > a.y)
		a = (t_v3d){a.y, a.x, a.z};
	if (a.y > a.z)
		a = (t_v3d){a.x, a.z, a.y};
	if (a.x > a.y)
		a = (t_v3d){a.y, a.x, a.z};
	return (a);
}

t_v4d			sortv4d(t_v4d a)
{
	if (a.x > a.y)
		a = (t_v4d){a.y, a.x, a.z, a.w};
	if (a.y > a.z)
		a = (t_v4d){a.x, a.z, a.y, a.w};
	if (a.z > a.w)
		a = (t_v4d){a.x, a.y, a.w, a.z};
	if (a.x > a.y)
		a = (t_v4d){a.y, a.x, a.z, a.w};
	if (a.y > a.z)
		a = (t_v4d){a.x, a.z, a.y, a.w};
	if (a.x > a.y)
		a = (t_v4d){a.y, a.x, a.z, a.w};
	return (a);
}

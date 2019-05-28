/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortf.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 16:03:48 by qloubier          #+#    #+#             */
/*   Updated: 2019/05/28 16:47:43 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

t_v2f			sortv2f(t_v2f a)
{
	if (a.x > a.y)
		return ((t_v2f){a.y, a.x});
	return (a);
}

t_v3f			sortv3f(t_v3f a)
{
	if (a.x > a.y)
		a = (t_v3f){a.y, a.x, a.z};
	if (a.y > a.z)
		a = (t_v3f){a.x, a.z, a.y};
	if (a.x > a.y)
		a = (t_v3f){a.y, a.x, a.z};
	return (a);
}

t_v4f			sortv4f(t_v4f a)
{
	if (a.x > a.y)
		a = (t_v4f){a.y, a.x, a.z, a.w};
	if (a.y > a.z)
		a = (t_v4f){a.x, a.z, a.y, a.w};
	if (a.z > a.w)
		a = (t_v4f){a.x, a.y, a.w, a.z};
	if (a.x > a.y)
		a = (t_v4f){a.y, a.x, a.z, a.w};
	if (a.y > a.z)
		a = (t_v4f){a.x, a.z, a.y, a.w};
	if (a.x > a.y)
		a = (t_v4f){a.y, a.x, a.z, a.w};
	return (a);
}

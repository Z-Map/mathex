/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortf.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 16:03:48 by qloubier          #+#    #+#             */
/*   Updated: 2017/06/02 21:27:14 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

v2f			sortv2f(v2f a)
{
	if (a.x > a.y)
		return ((v2f){a.y, a.x});
	return (a);
}

v3f			sortv3f(v3f a)
{
	if (a.x > a.y)
		a = (v3f){a.y, a.x, a.z};
	if (a.y > a.z)
		a = (v3f){a.x, a.z, a.y};
	if (a.x > a.y)
		a = (v3f){a.y, a.x, a.z};
	return (a);
}

v4f			sortv4f(v4f a)
{
	if (a.x > a.y)
		a = (v4f){a.y, a.x, a.z, a.w};
	if (a.y > a.z)
		a = (v4f){a.x, a.z, a.y, a.w};
	if (a.z > a.w)
		a = (v4f){a.x, a.y, a.w, a.z};
	if (a.x > a.y)
		a = (v4f){a.y, a.x, a.z, a.w};
	if (a.y > a.z)
		a = (v4f){a.x, a.z, a.y, a.w};
	if (a.x > a.y)
		a = (v4f){a.y, a.x, a.z, a.w};
	return (a);
}

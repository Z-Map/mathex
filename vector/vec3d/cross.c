/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cross.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 22:14:43 by qloubier          #+#    #+#             */
/*   Updated: 2017/06/02 22:23:39 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

v3d		v3dcrossv3d(const v3d a, const v3d b)
{
	return ((v3d){
		(a.y * b.z) - (a.z * b.y),
		(a.z * b.x) - (a.x * b.z),
		(a.x * b.y) - (a.y * b.x)});
}

v3d		v3dcrossv3f(const v3d a, const v3f b)
{
	return ((v3d){
		(a.y * (double)b.z) - (a.z * (double)b.y),
		(a.z * (double)b.x) - (a.x * (double)b.z),
		(a.x * (double)b.y) - (a.y * (double)b.x)});
}

v3d		*pv3dcrossv3d(v3d *v, const v3d b)
{
	*v = (v3d){
		(v->y * b.z) - (v->z * b.y),
		(v->z * b.x) - (v->x * b.z),
		(v->x * b.y) - (v->y * b.x)};
	return (v);
}

v3d		*pv3dcrossv3f(v3d *v, const v3f b)
{
	*v = (v3d){
		(v->y * (double)b.z) - (v->z * (double)b.y),
		(v->z * (double)b.x) - (v->x * (double)b.z),
		(v->x * (double)b.y) - (v->y * (double)b.x)};
	return (v);
}

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

t_v3d		v3dcrossv3d(const t_v3d a, const t_v3d b)
{
	return ((t_v3d){
		(a.y * b.z) - (a.z * b.y),
		(a.z * b.x) - (a.x * b.z),
		(a.x * b.y) - (a.y * b.x)});
}

t_v3d		v3dcrossv3f(const t_v3d a, const t_v3f b)
{
	return ((t_v3d){
		(a.y * (double)b.z) - (a.z * (double)b.y),
		(a.z * (double)b.x) - (a.x * (double)b.z),
		(a.x * (double)b.y) - (a.y * (double)b.x)});
}

t_v3d		*pv3dcrossv3d(t_v3d *v, const t_v3d b)
{
	*v = (t_v3d){
		(v->y * b.z) - (v->z * b.y),
		(v->z * b.x) - (v->x * b.z),
		(v->x * b.y) - (v->y * b.x)};
	return (v);
}

t_v3d		*pv3dcrossv3f(t_v3d *v, const t_v3f b)
{
	*v = (t_v3d){
		(v->y * (double)b.z) - (v->z * (double)b.y),
		(v->z * (double)b.x) - (v->x * (double)b.z),
		(v->x * (double)b.y) - (v->y * (double)b.x)};
	return (v);
}

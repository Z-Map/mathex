/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cross.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 22:14:43 by qloubier          #+#    #+#             */
/*   Updated: 2017/06/02 22:26:41 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

v3f		v3fcrossv3f(const v3f a, const v3f b)
{
	return ((v3f){
		(a.y * b.z) - (a.z * b.y),
		(a.z * b.x) - (a.x * b.z),
		(a.x * b.y) - (a.y * b.x)});
}

v3f		v3fcrossv3d(const v3f a, const v3d b)
{
	return ((v3f){
		(a.y * (float)b.z) - (a.z * (float)b.y),
		(a.z * (float)b.x) - (a.x * (float)b.z),
		(a.x * (float)b.y) - (a.y * (float)b.x)});
}

v3f		*pv3fcrossv3f(v3f *v, const v3f b)
{
	*v = (v3f){
		(v->y * b.z) - (v->z * b.y),
		(v->z * b.x) - (v->x * b.z),
		(v->x * b.y) - (v->y * b.x)};
	return (v);
}

v3f		*pv3fcrossv3d(v3f *v, const v3d b)
{
	*v = (v3f){
		(v->y * (float)b.z) - (v->z * (float)b.y),
		(v->z * (float)b.x) - (v->x * (float)b.z),
		(v->x * (float)b.y) - (v->y * (float)b.x)};
	return (v);
}

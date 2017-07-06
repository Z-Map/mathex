/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matf_project.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 11:54:05 by qloubier          #+#    #+#             */
/*   Updated: 2017/02/22 15:21:47 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/matrix.h"

static inline void	pmattf_vecprod(v4f *v, const mattf *mat)
{
	*v = (v4f){
		(mat->x.x * v->x) + (mat->y.x * v->y) + (mat->z.x * v->z)
		+ (mat->offset.x * v->w),
		(mat->x.y * v->x) + (mat->y.y * v->y) + (mat->z.y * v->z)
		+ (mat->offset.y * v->w),
		(mat->x.z * v->x) + (mat->y.z * v->y) + (mat->z.z * v->z)
		+ (mat->offset.z * v->w),
		(mat->w.x * v->x) + (mat->w.y * v->y) + (mat->w.z * v->z)
		+ (mat->w.w * v->w)
	};
}

v3f				*pmattf_project(v3f *v, const mattf *mat)
{
	v4f			vec;

	vec = (v4f){v->x, v->y, v->z, 1.0f};
	pmattf_vecprod(&vec, mat);
	vec.w = (vec.w + 1.0f) / 2.0f;
	*v = (v3f){vec.x / vec.w, vec.y / vec.w, vec.z / vec.w};
	return (v);
}

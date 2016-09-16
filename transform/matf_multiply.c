/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matf_multiply.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 11:54:05 by qloubier          #+#    #+#             */
/*   Updated: 2016/06/01 23:48:03 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

static inline float	pmattf_vecprod(t_v3f *v, const t_mattf *mat, float vw)
{
	float			w;

	w = (mat->w.x * v->x) + (mat->w.y * v->y) + (mat->w.z * v->z)
		+ (mat->w.w * vw);
	*v = (t_v3f){(mat->x.x * v->x) + (mat->y.x * v->y) + (mat->z.x * v->z)
			+ (mat->offset.x * vw),
		(mat->x.y * v->x) + (mat->y.y * v->y) + (mat->z.y * v->z)
			+ (mat->offset.y * vw),
		(mat->x.z * v->x) + (mat->y.z * v->y) + (mat->z.z * v->z)
			+ (mat->offset.z * vw)};
	return (w);
}

t_mattf				*pmattf_multiply(t_mattf *dest, const t_mattf *mat)
{
	pmattf_apply(&(dest->offset), mat);
	dest->w.x = pmattf_vecprod(&(dest->x), mat, dest->w.x);
	dest->w.y = pmattf_vecprod(&(dest->y), mat, dest->w.y);
	dest->w.z = pmattf_vecprod(&(dest->z), mat, dest->w.z);
	if (dest->w.w * mat->w.w)
		dest->w.w = 1.0f;
	return (dest);
}

t_mattf				mattf_multiply(t_mattf mat1, t_mattf mat2)
{
	pmattf_multiply(&mat1, &mat2);
	return (mat1);
}

t_v3f				*pmattf_apply(t_v3f *v, const t_mattf *mat)
{
	float			w;

	w = pmattf_vecprod(v, mat, 1.0f);
	if (w > 0.01f)
	{
		v->x /= w;
		v->y /= w;
		v->z /= w;
	}
	return (v);
}

t_v3f				mattf_apply(t_v3f v, t_mattf mat)
{
	float			w;

	w = (mat.w.x * v.x) + (mat.w.y * v.y) + (mat.w.z * v.z) + mat.w.w;
	return ((t_v3f){
		((mat.x.x * v.x) + (mat.y.x * v.y) + (mat.z.x * v.z)
			+ mat.offset.x) / w,
		((mat.x.y * v.x) + (mat.y.y * v.y) + (mat.z.y * v.z)
			+ mat.offset.y) / w,
		((mat.x.z * v.x) + (mat.y.z * v.y) + (mat.z.z * v.z)
			+ mat.offset.z) / w});
}

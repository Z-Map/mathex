/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matd_multiply.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 11:54:05 by qloubier          #+#    #+#             */
/*   Updated: 2016/11/25 05:00:21 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/matrix.h"

static inline void	pmattd_vecprod(v3d *v, const mattd *mat)
{
	*v = (v3d){(mat->x.x * v->x) + (mat->y.x * v->y) + (mat->z.x * v->z),
		(mat->x.y * v->x) + (mat->y.y * v->y) + (mat->z.y * v->z),
		(mat->x.z * v->x) + (mat->y.z * v->y) + (mat->z.z * v->z)};
}

mattd				*pmattd_multiply(mattd *dest, const mattd *mat)
{
	pmattd_apply(&(dest->offset), mat);
	pmattd_vecprod(&(dest->x), mat);
	pmattd_vecprod(&(dest->y), mat);
	pmattd_vecprod(&(dest->z), mat);
	return (dest);
}

mattd				mattd_multiply(mattd mat1, mattd mat2)
{
	pmattd_multiply(&mat1, &mat2);
	return (mat1);
}

v3d				*pmattd_apply(v3d *v, const mattd *mat)
{
	pmattd_vecprod(v, mat);
	v->x += mat->offset.x;
	v->y += mat->offset.y;
	v->z += mat->offset.z;
	return (v);
}

v3d				mattd_apply(v3d v, mattd mat)
{
	return ((v3d){
		(mat.x.x * v.x) + (mat.y.x * v.y) + (mat.z.x * v.z) + mat.offset.x,
		(mat.x.y * v.x) + (mat.y.y * v.y) + (mat.z.y * v.z) + mat.offset.y,
		(mat.x.z * v.x) + (mat.y.z * v.y) + (mat.z.z * v.z) + mat.offset.z});
}

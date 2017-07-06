/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matf_scale.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 09:27:57 by qloubier          #+#    #+#             */
/*   Updated: 2017/06/02 20:55:00 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/matrix.h"

mattf				*pmattf_scale(mattf *mat, float size)
{
	const v3f		s = nv3f(size);

	pv3fmulv3f(&(mat->x), s);
	pv3fmulv3f(&(mat->y), s);
	pv3fmulv3f(&(mat->z), s);
	return (mat);
}

mattf				mattf_scale(mattf mat, float size)
{
	const v3f		s = nv3f(size);

	pv3fmulv3f(&(mat.x), s);
	pv3fmulv3f(&(mat.y), s);
	pv3fmulv3f(&(mat.z), s);
	return (mat);
}

mattf				nmattf_scale(float size)
{
	return ((mattf){
		(v3f){ size, 0.0f, 0.0f},
		(v3f){ 0.0f, size, 0.0f},
		(v3f){ 0.0f, 0.0f, size},
		(v3f){ 0.0f, 0.0f, 0.0f},
		(v4f){ 0.0f, 0.0f, 0.0f, 1.0f}});
}

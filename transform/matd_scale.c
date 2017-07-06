/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matd_scale.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 09:27:57 by qloubier          #+#    #+#             */
/*   Updated: 2017/06/02 20:53:16 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/matrix.h"

mattd				*pmattd_scale(mattd *mat, double size)
{
	const v3d		s = nv3d(size);

	pv3dmulv3d(&(mat->x), s);
	pv3dmulv3d(&(mat->y), s);
	pv3dmulv3d(&(mat->z), s);
	return (mat);
}

mattd				mattd_scale(mattd mat, double size)
{
	const v3d		s = nv3d(size);

	pv3dmulv3d(&(mat.x), s);
	pv3dmulv3d(&(mat.y), s);
	pv3dmulv3d(&(mat.z), s);
	return (mat);
}

mattd				nmattd_scale(double size)
{
	return ((mattd){
		(v3d){ size, 0.0, 0.0},
		(v3d){ 0.0, size, 0.0},
		(v3d){ 0.0, 0.0, size},
		(v3d){ 0.0, 0.0, 0.0},
		(v4d){ 0.0, 0.0, 0.0, 1.0}});
}

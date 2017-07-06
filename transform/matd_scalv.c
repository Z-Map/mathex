/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matd_scalv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 13:06:20 by qloubier          #+#    #+#             */
/*   Updated: 2017/06/02 20:53:33 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/matrix.h"

mattd				*pmattd_scalv(mattd *mat, v3d sizev)
{
	pv3dmulv3d(&(mat->x), sizev);
	pv3dmulv3d(&(mat->y), sizev);
	pv3dmulv3d(&(mat->z), sizev);
	return (mat);
}

mattd				mattd_scalv(mattd mat, v3d sizev)
{
	pv3dmulv3d(&(mat.x), sizev);
	pv3dmulv3d(&(mat.y), sizev);
	pv3dmulv3d(&(mat.z), sizev);
	return (mat);
}

mattd				nmattd_scalv(v3d sizev)
{
	return ((mattd){
		(v3d){ sizev.x, 0.0, 0.0},
		(v3d){ 0.0, sizev.y, 0.0},
		(v3d){ 0.0, 0.0, sizev.z},
		(v3d){ 0.0, 0.0, 0.0},
		(v4d){ 0.0, 0.0, 0.0, 1.0}});
}

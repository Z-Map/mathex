/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matf_scalv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 13:06:20 by qloubier          #+#    #+#             */
/*   Updated: 2017/06/02 20:55:13 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/matrix.h"

mattf				*pmattf_scalv(mattf *mat, v3f sizev)
{
	pv3fmulv3f(&(mat->x), sizev);
	pv3fmulv3f(&(mat->y), sizev);
	pv3fmulv3f(&(mat->z), sizev);
	return (mat);
}

mattf				mattf_scalv(mattf mat, v3f sizev)
{
	pv3fmulv3f(&(mat.x), sizev);
	pv3fmulv3f(&(mat.y), sizev);
	pv3fmulv3f(&(mat.z), sizev);
	return (mat);
}

mattf				nmattf_scalv(v3f sizev)
{
	return ((mattf){
		(v3f){ sizev.x, 0.0f, 0.0f},
		(v3f){ 0.0f, sizev.y, 0.0f},
		(v3f){ 0.0f, 0.0f, sizev.z},
		(v3f){ 0.0f, 0.0f, 0.0f},
		(v4f){ 0.0f, 0.0f, 0.0f, 1.0f}});
}

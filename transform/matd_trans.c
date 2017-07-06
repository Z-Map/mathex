/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matd_trans.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/03 17:47:59 by qloubier          #+#    #+#             */
/*   Updated: 2017/06/02 20:53:41 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/matrix.h"

mattd				*pmattd_trans(mattd *mat, v3d mov)
{
	pv3daddv3d(&(mat->offset), mov);
	return (mat);
}

mattd				mattd_trans(mattd mat, v3d mov)
{
	pv3daddv3d(&(mat.offset), mov);
	return (mat);
}

mattd				nmattd_trans(v3d mov)
{
	return ((mattd){
		(v3d){ 1.0, 0.0, 0.0},
		(v3d){ 0.0, 1.0, 0.0},
		(v3d){ 0.0, 0.0, 1.0},
		mov,
		(v4d){ 0.0, 0.0, 0.0, 1.0}});
}

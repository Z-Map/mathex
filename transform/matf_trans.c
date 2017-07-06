/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matf_trans.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/03 17:47:59 by qloubier          #+#    #+#             */
/*   Updated: 2017/06/02 20:55:56 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/matrix.h"

mattf				*pmattf_trans(mattf *mat, v3f mov)
{
	pv3faddv3f(&(mat->offset), mov);
	return (mat);
}

mattf				mattf_trans(mattf mat, v3f mov)
{
	pv3faddv3f(&(mat.offset), mov);
	return (mat);
}

mattf				nmattf_trans(v3f mov)
{
	return ((mattf){
		(v3f){ 1.0f, 0.0f, 0.0f},
		(v3f){ 0.0f, 1.0f, 0.0f},
		(v3f){ 0.0f, 0.0f, 1.0f},
		mov,
		(v4f){ 0.0f, 0.0f, 0.0f, 1.0f}});
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quat_rot.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/26 15:50:50 by lcarreel          #+#    #+#             */
/*   Updated: 2019/05/28 17:14:45 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/quaternion.h"

t_quat		quat_rot(t_v3d axis, double rot)
{
	double	sa;

	rot *= 0.5;
	sa = sin(rot);
	return ((t_quat){
			.r = cos(rot),
			.i = axis.x * sa,
			.j = axis.y * sa,
			.k = axis.z * sa});
}

t_quatf		quatf_rot(t_v3f axis, float rot)
{
	float	sa;

	rot *= 0.5;
	sa = sinf(rot);
	return ((t_quatf){
			.r = cosf(rot),
			.i = axis.x * sa,
			.j = axis.y * sa,
			.k = axis.z * sa});
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quat_to_transform.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/26 15:50:50 by lcarreel          #+#    #+#             */
/*   Updated: 2019/05/28 17:36:35 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/quaternion.h"

t_mattd		quat_totransform(const t_quat q)
{
	return ((t_mattd){
		(t_v3d){
			1.0 - 2.0 * (q.j * q.j + q.k * q.k),
			2.0 * (q.i * q.j - q.r * q.k),
			2.0 * (q.r * q.j + q.i * q.k)},
		(t_v3d){
			2.0 * (q.r * q.k + q.i * q.j),
			1.0 - 2.0 * (q.i * q.i + q.k * q.k),
			2.0 * (q.j * q.k - q.r * q.i)},
		(t_v3d){
			2.0 * (q.i * q.k - q.r * q.j),
			2.0 * (q.r * q.i + q.j * q.k),
			1.0 - 2.0 * (q.i * q.i + q.j * q.j)},
		(t_v3d){0.0, 0.0, 0.0},
		(t_v4d){0.0, 0.0, 0.0, 1.0}
	});
}

t_mattd		quat_totransform_offset(const t_quat q, const t_v3d offset)
{
	const t_mattd	m = quat_totransform(q);

	return ((t_mattd){.x = m.x, .y = m.y, .z = m.z,
		.offset = offset, .w = m.w });
}

t_mattf		quatf_totransform(const t_quatf q)
{
	return ((t_mattf){
		(t_v3f){
			1.0f - 2.0f * (q.j * q.j + q.k * q.k),
			2.0f * (q.i * q.j - q.r * q.k),
			2.0f * (q.r * q.j + q.i * q.k)},
		(t_v3f){
			2.0f * (q.r * q.k + q.i * q.j),
			1.0f - 2.0f * (q.i * q.i + q.k * q.k),
			2.0f * (q.j * q.k - q.r * q.i)},
		(t_v3f){
			2.0f * (q.i * q.k - q.r * q.j),
			2.0f * (q.r * q.i + q.j * q.k),
			1.0f - 2.0f * (q.i * q.i + q.j * q.j)},
		(t_v3f){0.0f, 0.0f, 0.0f},
		(t_v4f){0.0f, 0.0f, 0.0f, 1.0f}
	});
}

t_mattf		quatf_totransform_offset(const t_quatf q, const t_v3f offset)
{
	const t_mattf	m = quatf_totransform(q);

	return ((t_mattf){.x = m.x, .y = m.y, .z = m.z,
		.offset = offset, .w = m.w});
}

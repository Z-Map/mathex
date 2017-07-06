/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quat_to_transform.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarreel <lcarreel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/26 15:50:50 by lcarreel          #+#    #+#             */
/*   Updated: 2017/07/04 01:46:39 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/quaternion.h"

mattd				quat_totransform(const quat q)
{
	return ((mattd){
		(v3d){
			1.0 - 2.0 * (q.j * q.j + q.k * q.k),
			2.0 * (q.i * q.j - q.r * q.k),
			2.0 * (q.r * q.j + q.i * q.k)},
		(v3d){
			2.0 * (q.r * q.k + q.i * q.j),
			1.0 - 2.0 * (q.i * q.i + q.k * q.k),
			2.0 * (q.j * q.k - q.r * q.i)},
		(v3d){
			2.0 * (q.i * q.k - q.r * q.j),
			2.0 * (q.r * q.i + q.j * q.k),
			1.0 - 2.0 * (q.i * q.i + q.j * q.j)},
		(v3d){0.0, 0.0, 0.0},
		(v4d){0.0, 0.0, 0.0, 1.0}
	});
}

mattd				quat_totransform_offset(const quat q, const v3d offset)
{
	const mattd	m = quat_totransform(q);

	return ((mattd){.x = m.x, .y = m.y, .z = m.z,
		.offset = offset, .w = m.w });
}

mattf				quatf_totransform(const quatf q)
{
	return ((mattf){
		(v3f){
			1.0f - 2.0f * (q.j * q.j + q.k * q.k),
			2.0f * (q.i * q.j - q.r * q.k),
			2.0f * (q.r * q.j + q.i * q.k)},
		(v3f){
			2.0f * (q.r * q.k + q.i * q.j),
			1.0f - 2.0f * (q.i * q.i + q.k * q.k),
			2.0f * (q.j * q.k - q.r * q.i)},
		(v3f){
			2.0f * (q.i * q.k - q.r * q.j),
			2.0f * (q.r * q.i + q.j * q.k),
			1.0f - 2.0f * (q.i * q.i + q.j * q.j)},
		(v3f){0.0f, 0.0f, 0.0f},
		(v4f){0.0f, 0.0f, 0.0f, 1.0f}
	});
}

mattf				quatf_totransform_offset(const quatf q, const v3f offset)
{
	const mattf	m = quatf_totransform(q);

	return ((mattf){.x = m.x, .y = m.y, .z = m.z,
		.offset = offset, .w = m.w});
}

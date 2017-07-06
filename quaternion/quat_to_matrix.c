/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quat_to_matrix.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarreel <lcarreel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/26 15:50:50 by lcarreel          #+#    #+#             */
/*   Updated: 2017/06/26 18:08:36 by lcarreel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/quaternion.h"

mat4d				quat_tomatrix(const quat q)
{
	return ((mat4d){
		(v4d){
			1.0 - 2.0 * (q.j * q.j + q.k * q.k),
			2.0 * (q.i * q.j - q.r * q.k),
			2.0 * (q.r * q.j + q.i * q.k),
			0.0},
		(v4d){
			2.0 * (q.r * q.k + q.i * q.j),
			1.0 - 2.0 * (q.i * q.i + q.k * q.k),
			2.0 * (q.j * q.k - q.r * q.i),
			0.0},
		(v4d){
			2.0 * (q.i * q.k - q.r * q.j),
			2.0 * (q.r * q.i + q.j * q.k),
			1.0 - 2.0 * (q.i * q.i + q.j * q.j),
			0.0},
		(v4d){0.0, 0.0, 0.0, 1.0}
	});
}

mat4d				quat_tomatrix_offset(const quat q, const v4d offset)
{
	const mat4d	m = quat_tomatrix(q);

	return ((mat4d){
		.x = m.x,
		.y = m.y,
		.z = m.z,
		.w = offset
	});
}

mat4f				quatf_tomatrix(const quatf q)
{
	return ((mat4f){
		(v4f){
			1.0f - 2.0f * (q.j * q.j + q.k * q.k),
			2.0f * (q.i * q.j - q.r * q.k),
			2.0f * (q.r * q.j + q.i * q.k),
			0.0f},
		(v4f){
			2.0f * (q.r * q.k + q.i * q.j),
			1.0f - 2.0f * (q.i * q.i + q.k * q.k),
			2.0f * (q.j * q.k - q.r * q.i),
			0.0f},
		(v4f){
			2.0f * (q.i * q.k - q.r * q.j),
			2.0f * (q.r * q.i + q.j * q.k),
			1.0f - 2.0f * (q.i * q.i + q.j * q.j),
			0.0f},
		(v4f){0.0f, 0.0f, 0.0f, 1.0f}
	});
}

mat4f				quatf_tomatrix_offset(const quatf q, const v4f offset)
{
	const mat4f	m = quatf_tomatrix(q);

	return ((mat4f){
		.x = m.x,
		.y = m.y,
		.z = m.z,
		.w = offset
	});
}

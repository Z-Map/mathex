/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quat_to_matrix.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/26 15:50:50 by lcarreel          #+#    #+#             */
/*   Updated: 2019/05/28 17:14:49 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/quaternion.h"

t_mat4d				quat_tomatrix(const t_quat q)
{
	return ((t_mat4d){
		(t_v4d){
			1.0 - 2.0 * (q.j * q.j + q.k * q.k),
			2.0 * (q.i * q.j - q.r * q.k),
			2.0 * (q.r * q.j + q.i * q.k),
			0.0},
		(t_v4d){
			2.0 * (q.r * q.k + q.i * q.j),
			1.0 - 2.0 * (q.i * q.i + q.k * q.k),
			2.0 * (q.j * q.k - q.r * q.i),
			0.0},
		(t_v4d){
			2.0 * (q.i * q.k - q.r * q.j),
			2.0 * (q.r * q.i + q.j * q.k),
			1.0 - 2.0 * (q.i * q.i + q.j * q.j),
			0.0},
		(t_v4d){0.0, 0.0, 0.0, 1.0}
	});
}

t_mat4d				quat_tomatrix_offset(const t_quat q, const t_v4d offset)
{
	const t_mat4d	m = quat_tomatrix(q);

	return ((t_mat4d){
		.x = m.x,
		.y = m.y,
		.z = m.z,
		.w = offset
	});
}

t_mat4f				quatf_tomatrix(const t_quatf q)
{
	return ((t_mat4f){
		(t_v4f){
			1.0f - 2.0f * (q.j * q.j + q.k * q.k),
			2.0f * (q.i * q.j - q.r * q.k),
			2.0f * (q.r * q.j + q.i * q.k),
			0.0f},
		(t_v4f){
			2.0f * (q.r * q.k + q.i * q.j),
			1.0f - 2.0f * (q.i * q.i + q.k * q.k),
			2.0f * (q.j * q.k - q.r * q.i),
			0.0f},
		(t_v4f){
			2.0f * (q.i * q.k - q.r * q.j),
			2.0f * (q.r * q.i + q.j * q.k),
			1.0f - 2.0f * (q.i * q.i + q.j * q.j),
			0.0f},
		(t_v4f){0.0f, 0.0f, 0.0f, 1.0f}
	});
}

t_mat4f				quatf_tomatrix_offset(const t_quatf q, const t_v4f offset)
{
	const t_mat4f	m = quatf_tomatrix(q);

	return ((t_mat4f){
		.x = m.x,
		.y = m.y,
		.z = m.z,
		.w = offset
	});
}

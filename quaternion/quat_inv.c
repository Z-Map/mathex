/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quat_inv.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarreel <lcarreel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/26 15:50:50 by lcarreel          #+#    #+#             */
/*   Updated: 2017/06/26 18:05:16 by lcarreel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/quaternion.h"

t_quat				quat_inv(const t_quat q)
{
	const double	t = 1 / (q.r * q.r + q.i * q.i + q.j * q.j + q.k * q.k);

	return ((t_quat){
		.r = t * q.r,
		.i = -t * q.i,
		.j = -t * q.j,
		.k = -t * q.k});
}

t_quatf				quatf_inv(const t_quatf q)
{
	const float		t = 1 / (q.r * q.r + q.i * q.i + q.j * q.j + q.k * q.k);

	return ((t_quatf){
		.r = t * q.r,
		.i = -t * q.i,
		.j = -t * q.j,
		.k = -t * q.k});
}

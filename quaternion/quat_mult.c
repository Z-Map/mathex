/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quat_mult.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarreel <lcarreel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/26 15:50:50 by lcarreel          #+#    #+#             */
/*   Updated: 2017/06/26 18:04:48 by lcarreel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/quaternion.h"

t_quat		quat_mult(t_quat a, t_quat b)
{
	return ((t_quat){
		.r = a.r * b.r - a.i * b.i - a.j * b.j - a.k * b.k,
		.i = a.r * b.i + b.r * a.i + a.j * b.k - b.j * a.k,
		.j = a.r * b.j + b.r * a.j - a.i * b.k + b.i * a.k,
		.k = a.r * b.k + b.r * a.k + a.i * b.j - b.i * a.j});
}

t_quatf		quatf_mult(t_quatf a, t_quatf b)
{
	return ((t_quatf){
		.r = a.r * b.r - a.i * b.i - a.j * b.j - a.k * b.k,
		.i = a.r * b.i + b.r * a.i + a.j * b.k - b.j * a.k,
		.j = a.r * b.j + b.r * a.j - a.i * b.k + b.i * a.k,
		.k = a.r * b.k + b.r * a.k + a.i * b.j - b.i * a.j});
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matd_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 09:39:25 by qloubier          #+#    #+#             */
/*   Updated: 2016/11/25 05:16:29 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"
#include <math.h>

t_mattd				mattd_identity(void)
{
	return ((t_mattd){
		(t_v3d){ 1.0, 0.0, 0.0},
		(t_v3d){ 0.0, 1.0, 0.0},
		(t_v3d){ 0.0, 0.0, 1.0},
		(t_v3d){ 0.0, 0.0, 0.0},
		(t_v4d){ 0.0, 0.0, 0.0, 1.0}});
}

t_mattd				mattd_perspective(double fov, double ratio, t_v2d clip)
{
	fov = tan(((fov / 360.0) * M_PI) / 2.0);
	return ((t_mattd){
		(t_v3d){ 1.0 / fov, 0.0, 0.0},
		(t_v3d){ 0.0, ratio / fov, 0.0},
		(t_v3d){ 0.0, 0.0, ((clip.y + clip.x) / (clip.x - clip.y))},
		(t_v3d){ 0.0, 0.0, ((2 * clip.y * clip.x) / (clip.x - clip.y))},
		(t_v4d){ 0.0, 0.0, -1.0, 0.0}});
}

t_mattd				mattd_ortho(int w, int h, double zoom, double limit)
{
	if (!(*(unsigned long *)(&zoom) & 0x7fffffff))
		zoom = 0.00001;
	return ((t_mattd){
		(t_v3d){ (double)w / zoom, 0.0, 0.0},
		(t_v3d){ 0.0, (double)h / zoom, 0.0},
		(t_v3d){ 0.0, 0.0, (-2 / (limit - 0.0001))},
		(t_v3d){ -(double)h * 0.5, -(double)h * 0.5,
			-((limit + 0.0001) / (limit - 0.0001))},
		(t_v4d){ 0.0, 0.0, 0.0, 1.0}});
}

t_mattd				mattd_iso(void)
{
	return ((t_mattd){
		(t_v3d){ 0.70710678118655, 0.40824829046386, 0.0},
		(t_v3d){ -0.70710678118655, 0.40824829046386, 0.0},
		(t_v3d){ 0.0, -0.816496580927728, 0.0},
		(t_v3d){ 0.0, 0.0, 0.0},
		(t_v4d){ 0.0, 0.0, 0.0, 1.0}});
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matd_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 09:39:25 by qloubier          #+#    #+#             */
/*   Updated: 2016/11/25 06:16:52 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/matrix.h"
#include <math.h>

mattd				mattd_identity(void)
{
	return ((mattd){
		(v3d){ 1.0, 0.0, 0.0},
		(v3d){ 0.0, 1.0, 0.0},
		(v3d){ 0.0, 0.0, 1.0},
		(v3d){ 0.0, 0.0, 0.0},
		(v4d){ 0.0, 0.0, 0.0, 1.0}});
}

mattd				mattd_perspective(double fov, double ratio, v2d clip)
{
	fov = tan(((fov / 360.0) * M_PI) / 2.0);
	return ((mattd){
		(v3d){ 1.0 / fov, 0.0, 0.0},
		(v3d){ 0.0, ratio / fov, 0.0},
		(v3d){ 0.0, 0.0, ((clip.y + clip.x) / (clip.x - clip.y))},
		(v3d){ 0.0, 0.0, ((2 * clip.y * clip.x) / (clip.x - clip.y))},
		(v4d){ 0.0, 0.0, -1.0, 0.0}});
}

mattd				mattd_ortho(int w, int h, double zoom, double limit)
{
	if (!(*(unsigned long *)(&zoom) & 0x7fffffff))
		zoom = 0.00001;
	return ((mattd){
		(v3d){ (double)w / zoom, 0.0, 0.0},
		(v3d){ 0.0, (double)h / zoom, 0.0},
		(v3d){ 0.0, 0.0, (-2 / (limit - 0.0001))},
		(v3d){ -(double)h * 0.5, -(double)h * 0.5,
			-((limit + 0.0001) / (limit - 0.0001))},
		(v4d){ 0.0, 0.0, 0.0, 1.0}});
}

mattd				mattd_iso(void)
{
	return ((mattd){
		(v3d){ 0.70710678118655, 0.40824829046386, 0.0},
		(v3d){ -0.70710678118655, 0.40824829046386, 0.0},
		(v3d){ 0.0, -0.816496580927728, 0.0},
		(v3d){ 0.0, 0.0, 0.0},
		(v4d){ 0.0, 0.0, 0.0, 1.0}});
}

mat4d				mattd_togl(const mattd m)
{
	return ((mat4d){
		(v4d){m.x.x, m.y.x, m.z.x, m.offset.x},
		(v4d){m.x.y, m.y.y, m.z.y, m.offset.y},
		(v4d){m.x.z, m.y.z, m.z.z, m.offset.z},
		(v4d){m.w.x, m.w.y, m.w.z, m.w.w}});
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matf_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 09:39:25 by qloubier          #+#    #+#             */
/*   Updated: 2016/11/26 04:45:28 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/matrix.h"
#include <math.h>

mattf				mattf_identity(void)
{
	return ((mattf){
		(v3f){ 1.0f, 0.0f, 0.0f},
		(v3f){ 0.0f, 1.0f, 0.0f},
		(v3f){ 0.0f, 0.0f, 1.0f},
		(v3f){ 0.0f, 0.0f, 0.0f},
		(v4f){ 0.0f, 0.0f, 0.0f, 1.0f}});
}

mattf				mattf_perspective(float fov, float ratio, v2f clip)
{
	fov = tanf(fov / 2.0f);
	return ((mattf){
		(v3f){ 1.0f / (fov * ratio), 0.0f, 0.0f},
		(v3f){ 0.0f, 1 / fov, 0.0f},
		(v3f){ 0.0f, 0.0f, ((clip.x + clip.y) / (clip.y - clip.x))},
		(v3f){ 0.0f, 0.0f, (-(2 * clip.x * clip.y) / (clip.y - clip.x))},
		(v4f){ 0.0f, 0.0f, 1.0f, 0.0f}});
}

mattf				mattf_ortho(int w, int h, float zoom, float limit)
{
	if (!(*(unsigned int *)(&zoom) & 0x7fffffff))
		zoom = 0.00001f;
	return ((mattf){
		(v3f){ (float)w / zoom, 0.0f, 0.0f},
		(v3f){ 0.0f, (float)h / zoom, 0.0f},
		(v3f){ 0.0f, 0.0f, (-2 / (limit - 0.0001f))},
		(v3f){ -(float)h * 0.5f, -(float)h * 0.5f,
			-((limit + 0.0001f) / (limit - 0.0001f))},
		(v4f){ 0.0f, 0.0f, 0.0f, 1.0f}});
}

mattf				mattf_iso(void)
{
	return ((mattf){
		(v3f){ 0.70710678118655f, 0.40824829046386f, 0.0f},
		(v3f){ -0.70710678118655f, 0.40824829046386f, 0.0f},
		(v3f){ 0.0f, -0.816496580927728f, 0.0f},
		(v3f){ 0.0f, 0.0f, 0.0f},
		(v4f){ 0.0f, 0.0f, 0.0f, 1.0f}});
}

mat4f				mattf_togl(const mattf m)
{
	return ((mat4f){
		(v4f){m.x.x, m.y.x, m.z.x, m.offset.x},
		(v4f){m.x.y, m.y.y, m.z.y, m.offset.y},
		(v4f){m.x.z, m.y.z, m.z.z, m.offset.z},
		(v4f){m.w.x, m.w.y, m.w.z, m.w.w}});
}

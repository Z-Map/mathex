/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matf_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 09:39:25 by qloubier          #+#    #+#             */
/*   Updated: 2016/11/25 04:49:27 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"
#include <math.h>

t_mattf				mattf_identity(void)
{
	return ((t_mattf){
		(t_v3f){ 1.0f, 0.0f, 0.0f},
		(t_v3f){ 0.0f, 1.0f, 0.0f},
		(t_v3f){ 0.0f, 0.0f, 1.0f},
		(t_v3f){ 0.0f, 0.0f, 0.0f},
		(t_v4f){ 0.0f, 0.0f, 0.0f, 1.0f}});
}

t_mattf				mattf_perspective(float fov, float ratio, t_v2f clip)
{
	fov = tanf(((fov / 360.0f) * (float)M_PI) / 2.0f);
	return ((t_mattf){
		(t_v3f){ 1.0f / fov, 0.0f, 0.0f},
		(t_v3f){ 0.0f, ratio / fov, 0.0f},
		(t_v3f){ 0.0f, 0.0f, ((clip.y + clip.x) / (clip.x - clip.y))},
		(t_v3f){ 0.0f, 0.0f, ((2 * clip.y * clip.x) / (clip.x - clip.y))},
		(t_v4f){ 0.0f, 0.0f, -1.0f, 0.0f}});
}

t_mattf				mattf_ortho(int w, int h, float zoom, float limit)
{
	if (!(*(unsigned int *)(&zoom) & 0x7fffffff))
		zoom = 0.00001f;
	return ((t_mattf){
		(t_v3f){ (float)w / zoom, 0.0f, 0.0f},
		(t_v3f){ 0.0f, (float)h / zoom, 0.0f},
		(t_v3f){ 0.0f, 0.0f, (-2 / (limit - 0.0001f))},
		(t_v3f){ -(float)h * 0.5f, -(float)h * 0.5f,
			-((limit + 0.0001f) / (limit - 0.0001f))},
		(t_v4f){ 0.0f, 0.0f, 0.0f, 1.0f}});
}

t_mattf				mattf_iso(void)
{
	return ((t_mattf){
		(t_v3f){ 0.70710678118655f, 0.40824829046386f, 0.0f},
		(t_v3f){ -0.70710678118655f, 0.40824829046386f, 0.0f},
		(t_v3f){ 0.0f, -0.816496580927728f, 0.0f},
		(t_v3f){ 0.0f, 0.0f, 0.0f},
		(t_v4f){ 0.0f, 0.0f, 0.0f, 1.0f}});
}

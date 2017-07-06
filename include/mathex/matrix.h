/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/28 03:13:40 by qloubier          #+#    #+#             */
/*   Updated: 2017/07/05 16:42:57 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATRIX_H
# define MATRIX_H

# include "mathex/vector.h"

typedef	struct		s_int_matrix_2d
{
	v2i				x;
	v2i				y;
}					mat2i;

typedef	struct		s_int_matrix_2x3d
{
	v3i				x;
	v3i				y;
}					mat2x3i;

typedef	struct		s_int_matrix_3x2d
{
	v2i				x;
	v2i				y;
	v2i				z;
}					mat3x2i;

typedef	struct		s_int_matrix_3d
{
	v3i				x;
	v3i				y;
	v3i				z;
}					mat3i;

typedef	struct		s_int_matrix_3x4d
{
	v4i				x;
	v4i				y;
	v4i				z;
}					mat3x4i;

typedef	struct		s_int_matrix_4d
{
	v4i				x;
	v4i				y;
	v4i				z;
	v4i				w;
}					mat4i;

typedef	struct		s_uint_matrix_2d
{
	v2ui			x;
	v2ui			y;
}					mat2ui;

typedef	struct		s_uint_matrix_2x3d
{
	v3ui			x;
	v3ui			y;
}					mat2x3ui;

typedef	struct		s_uint_matrix_3x2d
{
	v2ui			x;
	v2ui			y;
	v2ui			z;
}					mat3x2ui;

typedef	struct		s_uint_matrix_3d
{
	v3ui			x;
	v3ui			y;
	v3ui			z;
}					mat3ui;

typedef	struct		s_uint_matrix_3x4d
{
	v4ui			x;
	v4ui			y;
	v4ui			z;
}					mat3x4ui;

typedef	struct		s_uint_matrix_4d
{
	v4ui			x;
	v4ui			y;
	v4ui			z;
	v4ui			w;
}					mat4ui;

typedef	struct		s_float_matrix_2d
{
	v2f				x;
	v2f				y;
}					mat2f;

typedef	struct		s_float_matrix_2x3d
{
	v3f				x;
	v3f				y;
}					mat2x3f;

typedef	struct		s_float_matrix_3x2d
{
	v2f				x;
	v2f				y;
	v2f				z;
}					mat3x2f;

typedef	struct		s_float_matrix_3d
{
	v3f				x;
	v3f				y;
	v3f				z;
}					mat3f;

typedef	struct		s_float_matrix_3x4d
{
	v4f				x;
	v4f				y;
	v4f				z;
}					mat3x4f;

typedef	struct		s_float_matrix_4d
{
	v4f				x;
	v4f				y;
	v4f				z;
	v4f				w;
}					mat4f;

typedef	struct		s_double_matrix_2d
{
	v2d				x;
	v2d				y;
}					mat2d;

typedef	struct		s_double_matrix_2x3d
{
	v3d				x;
	v3d				y;
}					mat2x3d;

typedef	struct		s_double_matrix_3x2d
{
	v2d				x;
	v2d				y;
	v2d				z;
}					mat3x2d;

typedef	struct		s_double_matrix_3d
{
	v3d				x;
	v3d				y;
	v3d				z;
}					mat3d;

typedef	struct		s_double_matrix_3x4d
{
	v4d				x;
	v4d				y;
	v4d				z;
}					mat3x4d;

typedef	struct		s_double_matrix_4d
{
	v4d				x;
	v4d				y;
	v4d				z;
	v4d				w;
}					mat4d;

typedef	struct		s_float_matrix_transform
{
	v3f				x;
	v3f				y;
	v3f				z;
	v3f				offset;
	v4f				w;
}					mattf;

typedef	struct		s_double_matrix_transform
{
	v3d				x;
	v3d				y;
	v3d				z;
	v3d				offset;
	v4d				w;
}					mattd;

/*
**	Single precision matrix function
*/

mattf				*pmattf_trans(mattf *mat, v3f mov);
mattf				mattf_trans(mattf mat, v3f mov);
mattf				nmattf_trans(v3f mov);

mattf				*pmattf_scale(mattf *mat, float size);
mattf				mattf_scale(mattf mat, float size);
mattf				nmattf_scale(float size);
mattf				*pmattf_scalv(mattf *mat, v3f sizev);
mattf				mattf_scalv(mattf mat, v3f sizev);
mattf				nmattf_scalv(v3f sizev);

mattf				*pmattf_rotx(mattf *mat, float rad);
mattf				mattf_rotx(mattf mat, float rad);
mattf				nmattf_rotx(float rad);
mattf				*pmattf_roty(mattf *mat, float rad);
mattf				mattf_roty(mattf mat, float rad);
mattf				nmattf_roty(float rad);
mattf				*pmattf_rotz(mattf *mat, float rad);
mattf				mattf_rotz(mattf mat, float rad);
mattf				nmattf_rotz(float rad);

mattf				*pmattf_rot(mattf *mat, v3f vrad);
mattf				mattf_rot(mattf mat, v3f vrad);
mattf				nmattf_rot(v3f vrad);

mattf				*ptransformf(mattf *mat, v3f m, v3f r, v3f s);
mattf				transformf(mattf mat, v3f m, v3f r, v3f s);
mattf				ntransformf(v3f mov, v3f rot, v3f sca);

v3f					*pmattf_apply(v3f *v, const mattf *mat);
v3f					mattf_apply(v3f v, mattf mat);
v3f					*pmattf_project(v3f *v, const mattf *mat);

mattf				*pmattf_multiply(mattf *dest, const mattf *mat);
mattf				mattf_multiply(mattf mat1, mattf mat2);
mattf				*pmattf_invert(mattf *mat);
mattf				mattf_invert(const mattf *mat);

mattf				mattf_identity(void);
mattf				mattf_perspective(float fov, float ratio, v2f clip);
mattf				mattf_ortho(int w, int h, float zoom, float limit);
mattf				mattf_iso(void);

mat4f				mattf_togl(const mattf m);

/*
**	Double precision matrix function
*/

mattd				*pmattd_trans(mattd *mat, v3d mov);
mattd				mattd_trans(mattd mat, v3d mov);
mattd				nmattd_trans(v3d mov);

mattd				*pmattd_scale(mattd *mat, double size);
mattd				mattd_scale(mattd mat, double size);
mattd				nmattd_scale(double size);
mattd				*pmattd_scalv(mattd *mat, v3d sizev);
mattd				mattd_scalv(mattd mat, v3d sizev);
mattd				nmattd_scalv(v3d sizev);

mattd				*pmattd_rotx(mattd *mat, double rad);
mattd				mattd_rotx(mattd mat, double rad);
mattd				nmattd_rotx(double rad);
mattd				*pmattd_roty(mattd *mat, double rad);
mattd				mattd_roty(mattd mat, double rad);
mattd				nmattd_roty(double rad);
mattd				*pmattd_rotz(mattd *mat, double rad);
mattd				mattd_rotz(mattd mat, double rad);
mattd				nmattd_rotz(double rad);

mattd				*pmattd_rot(mattd *mat, v3d vrad);
mattd				mattd_rot(mattd mat, v3d vrad);
mattd				nmattd_rot(v3d vrad);

mattd				*ptransformd(mattd *mat, v3d m, v3d r, v3d s);
mattd				transformd(mattd mat, v3d m, v3d r, v3d s);
mattd				ntransformd(v3d mov, v3d rot, v3d sca);

v3d					*pmattd_apply(v3d *v, const mattd *mat);
v3d					mattd_apply(v3d v, mattd mat);

mattd				*pmattd_multiply(mattd *dest, const mattd *mat);
mattd				mattd_multiply(mattd mat1, mattd mat2);
mattd				*pmattd_invert(mattd *mat);
mattd				mattd_invert(const mattd *mat);

mattd				mattd_identity(void);
mattd				mattd_perspective(double fov, double ratio, v2d clip);
mattd				mattd_ortho(int w, int h, double zoom, double limit);
mattd				mattd_iso(void);

mat4d				mattd_togl(const mattd m);

#endif

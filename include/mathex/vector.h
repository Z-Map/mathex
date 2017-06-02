/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/28 03:13:40 by qloubier          #+#    #+#             */
/*   Updated: 2017/06/02 19:52:03 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
# define VECTOR_H

# include "mathex/fixedfloat.h"

typedef struct		s_color_rgb24
{
	unsigned char	r;
	unsigned char	g;
	unsigned char	b;
}					t_rgb;

typedef struct		s_color_bgr24
{
	unsigned char	b;
	unsigned char	g;
	unsigned char	r;
}					t_bgr;

typedef struct		s_color_rgba32
{
	unsigned char	r;
	unsigned char	g;
	unsigned char	b;
	unsigned char	a;
}					t_rgba;

typedef struct		s_color_bgra32
{
	unsigned char	b;
	unsigned char	g;
	unsigned char	r;
	unsigned char	a;
}					t_bgra;

typedef struct		s_color_argb32
{
	unsigned char	a;
	unsigned char	r;
	unsigned char	g;
	unsigned char	b;
}					t_argb;

typedef struct		s_color_abgr32
{
	unsigned char	a;
	unsigned char	b;
	unsigned char	g;
	unsigned char	r;
}					t_abgr;

typedef struct		s_int_vector_2d
{
	int				x;
	int				y;
}					t_v2i;

typedef struct		s_int_vector_3d
{
	int				x;
	int				y;
	int				z;
}					t_v3i;

typedef struct		s_int_vector_4d
{
	int				x;
	int				y;
	int				z;
	int				w;
}					t_v4i;

typedef struct		s_uint_vector_2d
{
	unsigned int	x;
	unsigned int	y;
}					t_v2ui;

typedef struct		s_uint_vector_3d
{
	unsigned int	x;
	unsigned int	y;
	unsigned int	z;
}					t_v3ui;

typedef struct		s_uint_vector_4d
{
	unsigned int	x;
	unsigned int	y;
	unsigned int	z;
	unsigned int	w;
}					t_v4ui;

typedef struct		s_float_vector_2d
{
	float			x;
	float			y;
}					t_v2f;

typedef struct		s_float_vector_3d
{
	float			x;
	float			y;
	float			z;
}					t_v3f;

typedef struct		s_float_vector_4d
{
	float			x;
	float			y;
	float			z;
	float			w;
}					t_v4f;

typedef struct		s_double_vector_2d
{
	double			x;
	double			y;
}					t_v2d;

typedef struct		s_double_vector_3d
{
	double			x;
	double			y;
	double			z;
}					t_v3d;

typedef struct		s_double_vector_4d
{
	double			x;
	double			y;
	double			z;
	double			w;
}					t_v4d;

t_v2i				nv2i(int i);
t_v3i				nv3i(int i);
t_v4i				nv4i(int i);
t_v2f				nv2f(float num);
t_v3f				nv3f(float num);
t_v4f				nv4f(float num);
t_v2d				nv2d(double num);
t_v3d				nv3d(double num);
t_v4d				nv4d(double num);

t_v2i				v3to2i(t_v3i vec);
t_v2i				v4to2i(t_v4i vec);
t_v3i				v2to3i(t_v2i vec);
t_v3i				v4to3i(t_v4i vec);
t_v2f				v3to2f(t_v3f vec);
t_v2f				v4to2f(t_v4f vec);
t_v3f				v2to3f(t_v2f vec);
t_v3f				v4to3f(t_v4f vec);
t_v2d				v3to2d(t_v3d vec);
t_v2d				v4to2d(t_v4d vec);
t_v3d				v2to3d(t_v2d vec);
t_v3d				v4to3d(t_v4d vec);

void				swapv2i(t_v2i *a, t_v2i *b);
void				swapv3i(t_v3i *a, t_v3i *b);
void				swapv4i(t_v4i *a, t_v4i *b);

void				swapv2f(t_v2f *a, t_v2f *b);
void				swapv3f(t_v3f *a, t_v3f *b);
void				swapv4f(t_v4f *a, t_v4f *b);

void				swapv2d(t_v2d *a, t_v2d *b);
void				swapv3d(t_v3d *a, t_v3d *b);
void				swapv4d(t_v4d *a, t_v4d *b);

t_v2d				sortv2d(t_v2d a);
t_v3d				sortv3d(t_v3d a);
t_v4d				sortv4d(t_v4d a);

/*
** v2i tool
*/

t_v2i				v2iaddv2i(t_v2i a, t_v2i b);
t_v2i				v2iaddv2f(t_v2i a, t_v2f b);
t_v2i				v2iaddv2d(t_v2i a, t_v2d b);
t_v2i				*pv2iaddv2i(t_v2i *a, const t_v2i *b);
t_v2i				*pv2iaddv2f(t_v2i *a, const t_v2f *b);
t_v2i				*pv2iaddv2d(t_v2i *a, const t_v2d *b);

t_v2i				v2isubv2i(t_v2i a, t_v2i b);
t_v2i				v2isubv2f(t_v2i a, t_v2f b);
t_v2i				v2isubv2d(t_v2i a, t_v2d b);
t_v2i				*pv2isubv2i(t_v2i *a, const t_v2i *b);
t_v2i				*pv2isubv2f(t_v2i *a, const t_v2f *b);
t_v2i				*pv2isubv2d(t_v2i *a, const t_v2d *b);

t_v2i				v2imulv2i(t_v2i a, t_v2i b);
t_v2i				v2imulv2f(t_v2i a, t_v2f b);
t_v2i				v2imulv2d(t_v2i a, t_v2d b);
t_v2i				*pv2imulv2i(t_v2i *a, const t_v2i *b);
t_v2i				*pv2imulv2f(t_v2i *a, const t_v2f *b);
t_v2i				*pv2imulv2d(t_v2i *a, const t_v2d *b);

t_v2i				v2idivv2i(t_v2i a, t_v2i b);
t_v2i				v2idivv2f(t_v2i a, t_v2f b);
t_v2i				v2idivv2d(t_v2i a, t_v2d b);
t_v2i				*pv2idivv2i(t_v2i *a, const t_v2i *b);
t_v2i				*pv2idivv2f(t_v2i *a, const t_v2f *b);
t_v2i				*pv2idivv2d(t_v2i *a, const t_v2d *b);

/*
** v2f tool
*/

t_v2f				v2faddv2i(t_v2f a, t_v2i b);
t_v2f				v2faddv2f(t_v2f a, t_v2f b);
t_v2f				v2faddv2d(t_v2f a, t_v2d b);
t_v2f				*pv2faddv2i(t_v2f *a, const t_v2i *b);
t_v2f				*pv2faddv2f(t_v2f *a, const t_v2f *b);
t_v2f				*pv2faddv2d(t_v2f *a, const t_v2d *b);

t_v2f				v2fsubv2i(t_v2f a, t_v2i b);
t_v2f				v2fsubv2f(t_v2f a, t_v2f b);
t_v2f				v2fsubv2d(t_v2f a, t_v2d b);
t_v2f				*pv2fsubv2i(t_v2f *a, const t_v2i *b);
t_v2f				*pv2fsubv2f(t_v2f *a, const t_v2f *b);
t_v2f				*pv2fsubv2d(t_v2f *a, const t_v2d *b);

t_v2f				v2fmulv2i(t_v2f a, t_v3i b);
t_v2f				v2fmulv2f(t_v2f a, t_v3f b);
t_v2f				v2fmulv2d(t_v2f a, t_v3d b);
t_v2f				*pv2fmulv2i(t_v2f *a, const t_v3i *b);
t_v2f				*pv2fmulv2f(t_v2f *a, const t_v3f *b);
t_v2f				*pv2fmulv2d(t_v2f *a, const t_v3d *b);

t_v2f				v2fdivv2i(t_v2f a, t_v3i b);
t_v2f				v2fdivv2f(t_v2f a, t_v3f b);
t_v2f				v2fdivv2d(t_v2f a, t_v3d b);
t_v2f				*pv2fdivv2i(t_v2f *a, const t_v3i *b);
t_v2f				*pv2fdivv2f(t_v2f *a, const t_v3f *b);
t_v2f				*pv2fdivv2d(t_v2f *a, const t_v3d *b);

t_v2f				normalize2f(t_v2f v);
t_v2f				normlen2f(t_v2f v, float *nor);

/*
** v2d tool
*/

t_v2d				v2daddv2i(t_v2d a, t_v2i b);
t_v2d				v2daddv2f(t_v2d a, t_v2f b);
t_v2d				v2daddv2d(t_v2d a, t_v2d b);
t_v2d				*pv2daddv2i(t_v2d *a, const t_v2i *b);
t_v2d				*pv2daddv2f(t_v2d *a, const t_v2f *b);
t_v2d				*pv2daddv2d(t_v2d *a, const t_v2d *b);

t_v2d				v2dsubv2i(t_v2d a, t_v2i b);
t_v2d				v2dsubv2f(t_v2d a, t_v2f b);
t_v2d				v2dsubv2d(t_v2d a, t_v2d b);
t_v2d				*pv2dsubv2i(t_v2d *a, const t_v2i *b);
t_v2d				*pv2dsubv2f(t_v2d *a, const t_v2f *b);
t_v2d				*pv2dsubv2d(t_v2d *a, const t_v2d *b);

t_v2d				v2dmulv2i(t_v2d a, t_v2i b);
t_v2d				v2dmulv2f(t_v2d a, t_v2f b);
t_v2d				v2dmulv2d(t_v2d a, t_v2d b);
t_v2d				*pv2dmulv2i(t_v2d *a, const t_v2i *b);
t_v2d				*pv2dmulv2f(t_v2d *a, const t_v2f *b);
t_v2d				*pv2dmulv2d(t_v2d *a, const t_v2d *b);

t_v2d				v2ddivv2i(t_v2d a, t_v2i b);
t_v2d				v2ddivv2f(t_v2d a, t_v2f b);
t_v2d				v2ddivv2d(t_v2d a, t_v2f b);
t_v2d				*pv2ddivv2i(t_v2d *a, const t_v2i *b);
t_v2d				*pv2ddivv2f(t_v2d *a, const t_v2f *b);
t_v2d				*pv2ddivv2d(t_v2d *a, const t_v2f *b);

t_v2d				normalize2d(t_v2d v);
t_v2d				normlen2d(t_v2d v, double *nor);

/*
** v3i tool
*/

t_v3i				v3iaddv3i(t_v3i a, t_v3i b);
t_v3i				v3iaddv3f(t_v3i a, t_v3f b);
t_v3i				v3iaddv3d(t_v3i a, t_v3d b);
t_v3i				*pv3iaddv3i(t_v3i *a, const t_v3i *b);
t_v3i				*pv3iaddv3f(t_v3i *a, const t_v3f *b);
t_v3i				*pv3iaddv3d(t_v3i *a, const t_v3d *b);

t_v3i				v3isubv3i(t_v3i a, t_v3i b);
t_v3i				v3isubv3f(t_v3i a, t_v3f b);
t_v3i				v3isubv3d(t_v3i a, t_v3d b);
t_v3i				*pv3isubv3i(t_v3i *a, const t_v3i *b);
t_v3i				*pv3isubv3f(t_v3i *a, const t_v3f *b);
t_v3i				*pv3isubv3d(t_v3i *a, const t_v3d *b);

t_v3i				v3imulv3i(t_v3i a, t_v3i b);
t_v3i				v3imulv3f(t_v3i a, t_v3f b);
t_v3i				v3imulv3d(t_v3i a, t_v3d b);
t_v3i				*pv3imulv3i(t_v3i *a, const t_v3i *b);
t_v3i				*pv3imulv3f(t_v3i *a, const t_v3f *b);
t_v3i				*pv3imulv3d(t_v3i *a, const t_v3d *b);

t_v3i				v3idivv3i(t_v3i a, t_v3i b);
t_v3i				v3idivv3f(t_v3i a, t_v3f b);
t_v3i				v3idivv3d(t_v3i a, t_v3d b);
t_v3i				*pv3idivv3i(t_v3i *a, const t_v3i *b);
t_v3i				*pv3idivv3f(t_v3i *a, const t_v3f *b);
t_v3i				*pv3idivv3d(t_v3i *a, const t_v3d *b);

/*
** v3f tool
*/

t_v3f				v3faddv3i(t_v3f a, t_v3i b);
t_v3f				v3faddv3f(t_v3f a, t_v3f b);
t_v3f				v3faddv3d(t_v3f a, t_v3d b);
t_v3f				*pv3faddv3i(t_v3f *a, const t_v3i *b);
t_v3f				*pv3faddv3f(t_v3f *a, const t_v3f *b);
t_v3f				*pv3faddv3d(t_v3f *a, const t_v3d *b);

t_v3f				v3fsubv3i(t_v3f a, t_v3i b);
t_v3f				v3fsubv3f(t_v3f a, t_v3f b);
t_v3f				v3fsubv3d(t_v3f a, t_v3d b);
t_v3f				*pv3fsubv3i(t_v3f *a, const t_v3i *b);
t_v3f				*pv3fsubv3f(t_v3f *a, const t_v3f *b);
t_v3f				*pv3fsubv3d(t_v3f *a, const t_v3d *b);

t_v3f				v3fmulv3i(t_v3f a, t_v3i b);
t_v3f				v3fmulv3f(t_v3f a, t_v3f b);
t_v3f				v3fmulv3d(t_v3f a, t_v3d b);
t_v3f				*pv3fmulv3i(t_v3f *a, const t_v3i *b);
t_v3f				*pv3fmulv3f(t_v3f *a, const t_v3f *b);
t_v3f				*pv3fmulv3d(t_v3f *a, const t_v3d *b);

t_v3f				v3fdivv3i(t_v3f a, t_v3i b);
t_v3f				v3fdivv3f(t_v3f a, t_v3f b);
t_v3f				v3fdivv3d(t_v3f a, t_v3d b);
t_v3f				*pv3fdivv3i(t_v3f *a, const t_v3i *b);
t_v3f				*pv3fdivv3f(t_v3f *a, const t_v3f *b);
t_v3f				*pv3fdivv3d(t_v3f *a, const t_v3d *b);

t_v3f				normalize3f(t_v3f v);
t_v3f				normlen3f(t_v3f v, float *nor);

/*
** v3d tool
*/

t_v3d				v3daddv3i(t_v3d a, t_v3i b);
t_v3d				v3daddv3f(t_v3d a, t_v3f b);
t_v3d				v3daddv3d(t_v3d a, t_v3d b);
t_v3d				*pv3daddv3i(t_v3d *a, const t_v3i *b);
t_v3d				*pv3daddv3f(t_v3d *a, const t_v3f *b);
t_v3d				*pv3daddv3d(t_v3d *a, const t_v3d *b);

t_v3d				v3dsubv3i(t_v3d a, t_v3i b);
t_v3d				v3dsubv3f(t_v3d a, t_v3f b);
t_v3d				v3dsubv3d(t_v3d a, t_v3d b);
t_v3d				*pv3dsubv3i(t_v3d *a, const t_v3i *b);
t_v3d				*pv3dsubv3f(t_v3d *a, const t_v3f *b);
t_v3d				*pv3dsubv3d(t_v3d *a, const t_v3d *b);

t_v3d				v3dmulv3i(t_v3d a, t_v3i b);
t_v3d				v3dmulv3f(t_v3d a, t_v3f b);
t_v3d				v3dmulv3d(t_v3d a, t_v3d b);
t_v3d				*pv3dmulv3i(t_v3d *a, const t_v3i *b);
t_v3d				*pv3dmulv3f(t_v3d *a, const t_v3f *b);
t_v3d				*pv3dmulv3d(t_v3d *a, const t_v3d *b);

t_v3d				v3ddivv3i(t_v3d a, t_v3i b);
t_v3d				v3ddivv3f(t_v3d a, t_v3f b);
t_v3d				v3ddivv3d(t_v3d a, t_v3d b);
t_v3d				*pv3ddivv3i(t_v3d *a, const t_v3i *b);
t_v3d				*pv3ddivv3f(t_v3d *a, const t_v3f *b);
t_v3d				*pv3ddivv3d(t_v3d *a, const t_v3d *b);

t_v3d				normalize3d(t_v3d v);
t_v3d				normlen3d(t_v3d v, double *nor);

/*
** Normalisation
*/

t_v3d				normalize4d(t_v3d v);
t_v3f				normalize4f(t_v3f v);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/28 03:13:40 by qloubier          #+#    #+#             */
/*   Updated: 2017/07/07 09:22:53 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
# define VECTOR_H

# include "mathex/fixedfloat.h"

typedef struct		s_int_vector_2d
{
	int				x;
	int				y;
}					v2i;

typedef struct		s_int_vector_3d
{
	int				x;
	int				y;
	int				z;
}					v3i;

typedef struct		s_int_vector_4d
{
	int				x;
	int				y;
	int				z;
	int				w;
}					v4i;

typedef struct		s_uint_vector_2d
{
	unsigned int	x;
	unsigned int	y;
}					v2ui;

typedef struct		s_uint_vector_3d
{
	unsigned int	x;
	unsigned int	y;
	unsigned int	z;
}					v3ui;

typedef struct		s_uint_vector_4d
{
	unsigned int	x;
	unsigned int	y;
	unsigned int	z;
	unsigned int	w;
}					v4ui;

typedef struct		s_float_vector_2d
{
	float			x;
	float			y;
}					v2f;

typedef struct		s_float_vector_3d
{
	float			x;
	float			y;
	float			z;
}					v3f;

typedef struct		s_float_vector_4d
{
	float			x;
	float			y;
	float			z;
	float			w;
}					v4f;

typedef struct		s_double_vector_2d
{
	double			x;
	double			y;
}					v2d;

typedef struct		s_double_vector_3d
{
	double			x;
	double			y;
	double			z;
}					v3d;

typedef struct		s_double_vector_4d
{
	double			x;
	double			y;
	double			z;
	double			w;
}					v4d;

v2i					nv2i(int i);
v3i					nv3i(int i);
v4i					nv4i(int i);
v2f					nv2f(float num);
v3f					nv3f(float num);
v4f					nv4f(float num);
v2d					nv2d(double num);
v3d					nv3d(double num);
v4d					nv4d(double num);

v2i					v3to2i(v3i vec);
v2i					v4to2i(v4i vec);
v3i					v2to3i(v2i vec);
v3i					v4to3i(v4i vec);
v4i					v2to4i(v2i vec);
v4i					v3to4i(v3i vec);

v2f					v3to2f(v3f vec);
v2f					v4to2f(v4f vec);
v3f					v2to3f(v2f vec);
v3f					v4to3f(v4f vec);
v4f					v2to4f(v2f vec);
v4f					v3to4f(v3f vec);

v2d					v3to2d(v3d vec);
v2d					v4to2d(v4d vec);
v3d					v2to3d(v2d vec);
v3d					v4to3d(v4d vec);
v4d					v2to4d(v2d vec);
v4d					v3to4d(v3d vec);

void				swapv2i(v2i *a, v2i *b);
void				swapv3i(v3i *a, v3i *b);
void				swapv4i(v4i *a, v4i *b);

void				swapv2f(v2f *a, v2f *b);
void				swapv3f(v3f *a, v3f *b);
void				swapv4f(v4f *a, v4f *b);

void				swapv2d(v2d *a, v2d *b);
void				swapv3d(v3d *a, v3d *b);
void				swapv4d(v4d *a, v4d *b);

v2f					sortv2f(v2f a);
v3f					sortv3f(v3f a);
v4f					sortv4f(v4f a);

v2d					sortv2d(v2d a);
v3d					sortv3d(v3d a);
v4d					sortv4d(v4d a);

/*
** v2i tool
*/

v2i					v2iaddv2i(v2i a, v2i b);
v2i					v2iaddv2f(v2i a, v2f b);
v2i					v2iaddv2d(v2i a, v2d b);
v2i					*pv2iaddv2i(v2i *a, const v2i b);
v2i					*pv2iaddv2f(v2i *a, const v2f b);
v2i					*pv2iaddv2d(v2i *a, const v2d b);

v2i					v2isubv2i(v2i a, v2i b);
v2i					v2isubv2f(v2i a, v2f b);
v2i					v2isubv2d(v2i a, v2d b);
v2i					*pv2isubv2i(v2i *a, const v2i b);
v2i					*pv2isubv2f(v2i *a, const v2f b);
v2i					*pv2isubv2d(v2i *a, const v2d b);

v2i					v2imulv2i(v2i a, v2i b);
v2i					v2imulv2f(v2i a, v2f b);
v2i					v2imulv2d(v2i a, v2d b);
v2i					*pv2imulv2i(v2i *a, const v2i b);
v2i					*pv2imulv2f(v2i *a, const v2f b);
v2i					*pv2imulv2d(v2i *a, const v2d b);

v2i					v2idivv2i(v2i a, v2i b);
v2i					v2idivv2f(v2i a, v2f b);
v2i					v2idivv2d(v2i a, v2d b);
v2i					*pv2idivv2i(v2i *a, const v2i b);
v2i					*pv2idivv2f(v2i *a, const v2f b);
v2i					*pv2idivv2d(v2i *a, const v2d b);

v2i					inv2i(v2i a);
v2i					*invp2i(v2i *a);

/*
** v2f tool
*/

v2f					v2faddv2i(v2f a, v2i b);
v2f					v2faddv2f(v2f a, v2f b);
v2f					v2faddv2d(v2f a, v2d b);
v2f					*pv2faddv2i(v2f *a, const v2i b);
v2f					*pv2faddv2f(v2f *a, const v2f b);
v2f					*pv2faddv2d(v2f *a, const v2d b);

v2f					v2fsubv2i(v2f a, v2i b);
v2f					v2fsubv2f(v2f a, v2f b);
v2f					v2fsubv2d(v2f a, v2d b);
v2f					*pv2fsubv2i(v2f *a, const v2i b);
v2f					*pv2fsubv2f(v2f *a, const v2f b);
v2f					*pv2fsubv2d(v2f *a, const v2d b);

v2f					v2fmulv2i(v2f a, v2i b);
v2f					v2fmulv2f(v2f a, v2f b);
v2f					v2fmulv2d(v2f a, v2d b);
v2f					*pv2fmulv2i(v2f *a, const v2i b);
v2f					*pv2fmulv2f(v2f *a, const v2f b);
v2f					*pv2fmulv2d(v2f *a, const v2d b);

v2f					v2fdivv2i(v2f a, v2i b);
v2f					v2fdivv2f(v2f a, v2f b);
v2f					v2fdivv2d(v2f a, v2d b);
v2f					*pv2fdivv2i(v2f *a, const v2i b);
v2f					*pv2fdivv2f(v2f *a, const v2f b);
v2f					*pv2fdivv2d(v2f *a, const v2d b);

v2f					*normalize2f(v2f *v);
v2f					normalized2f(v2f v);
v2f					normlen2f(v2f v, float *nor);

float				v2fdotv2f(const v2f a, const v2f b);
float				v2fdotv2d(const v2f a, const v2d b);

v2f					inv2f(v2f a);
v2f					*invp2f(v2f *a);

/*
** v2d tool
*/

v2d					v2daddv2i(v2d a, v2i b);
v2d					v2daddv2f(v2d a, v2f b);
v2d					v2daddv2d(v2d a, v2d b);
v2d					*pv2daddv2i(v2d *a, const v2i b);
v2d					*pv2daddv2f(v2d *a, const v2f b);
v2d					*pv2daddv2d(v2d *a, const v2d b);

v2d					v2dsubv2i(v2d a, v2i b);
v2d					v2dsubv2f(v2d a, v2f b);
v2d					v2dsubv2d(v2d a, v2d b);
v2d					*pv2dsubv2i(v2d *a, const v2i b);
v2d					*pv2dsubv2f(v2d *a, const v2f b);
v2d					*pv2dsubv2d(v2d *a, const v2d b);

v2d					v2dmulv2i(v2d a, v2i b);
v2d					v2dmulv2f(v2d a, v2f b);
v2d					v2dmulv2d(v2d a, v2d b);
v2d					*pv2dmulv2i(v2d *a, const v2i b);
v2d					*pv2dmulv2f(v2d *a, const v2f b);
v2d					*pv2dmulv2d(v2d *a, const v2d b);

v2d					v2ddivv2i(v2d a, v2i b);
v2d					v2ddivv2f(v2d a, v2f b);
v2d					v2ddivv2d(v2d a, v2f b);
v2d					*pv2ddivv2i(v2d *a, const v2i b);
v2d					*pv2ddivv2f(v2d *a, const v2f b);
v2d					*pv2ddivv2d(v2d *a, const v2f b);

v2d					*normalize2d(v2d *v);
v2d					normalized2d(v2d v);
v2d					normlen2d(v2d v, double *nor);

double				v2ddotv2d(const v2d a, const v2d b);
double				v2ddotv2f(const v2d a, const v2f b);

v2d					inv2d(v2d a);
v2d					*invp2d(v2d *a);

/*
** v3i tool
*/

v3i					v3iaddv3i(v3i a, v3i b);
v3i					v3iaddv3f(v3i a, v3f b);
v3i					v3iaddv3d(v3i a, v3d b);
v3i					*pv3iaddv3i(v3i *a, const v3i b);
v3i					*pv3iaddv3f(v3i *a, const v3f b);
v3i					*pv3iaddv3d(v3i *a, const v3d b);

v3i					v3isubv3i(v3i a, v3i b);
v3i					v3isubv3f(v3i a, v3f b);
v3i					v3isubv3d(v3i a, v3d b);
v3i					*pv3isubv3i(v3i *a, const v3i b);
v3i					*pv3isubv3f(v3i *a, const v3f b);
v3i					*pv3isubv3d(v3i *a, const v3d b);

v3i					v3imulv3i(v3i a, v3i b);
v3i					v3imulv3f(v3i a, v3f b);
v3i					v3imulv3d(v3i a, v3d b);
v3i					*pv3imulv3i(v3i *a, const v3i b);
v3i					*pv3imulv3f(v3i *a, const v3f b);
v3i					*pv3imulv3d(v3i *a, const v3d b);

v3i					v3idivv3i(v3i a, v3i b);
v3i					v3idivv3f(v3i a, v3f b);
v3i					v3idivv3d(v3i a, v3d b);
v3i					*pv3idivv3i(v3i *a, const v3i b);
v3i					*pv3idivv3f(v3i *a, const v3f b);
v3i					*pv3idivv3d(v3i *a, const v3d b);

v3i					inv3i(v3i a);
v3i					*invp3i(v3i *a);

/*
** v3f tool
*/

v3f					v3faddv3i(v3f a, v3i b);
v3f					v3faddv3f(v3f a, v3f b);
v3f					v3faddv3d(v3f a, v3d b);
v3f					*pv3faddv3i(v3f *a, const v3i b);
v3f					*pv3faddv3f(v3f *a, const v3f b);
v3f					*pv3faddv3d(v3f *a, const v3d b);

v3f					v3fsubv3i(v3f a, v3i b);
v3f					v3fsubv3f(v3f a, v3f b);
v3f					v3fsubv3d(v3f a, v3d b);
v3f					*pv3fsubv3i(v3f *a, const v3i b);
v3f					*pv3fsubv3f(v3f *a, const v3f b);
v3f					*pv3fsubv3d(v3f *a, const v3d b);

v3f					v3fmulv3i(v3f a, v3i b);
v3f					v3fmulv3f(v3f a, v3f b);
v3f					v3fmulv3d(v3f a, v3d b);
v3f					*pv3fmulv3i(v3f *a, const v3i b);
v3f					*pv3fmulv3f(v3f *a, const v3f b);
v3f					*pv3fmulv3d(v3f *a, const v3d b);

v3f					v3fdivv3i(v3f a, v3i b);
v3f					v3fdivv3f(v3f a, v3f b);
v3f					v3fdivv3d(v3f a, v3d b);
v3f					*pv3fdivv3i(v3f *a, const v3i b);
v3f					*pv3fdivv3f(v3f *a, const v3f b);
v3f					*pv3fdivv3d(v3f *a, const v3d b);

float				len3f(v3f v);

v3f					*normalize3f(v3f *v);
v3f					normalized3f(v3f v);
v3f					normlen3f(v3f v, float *nor);

v3f					frac3f(v3f v);
v3f					*pfrac3f(v3f *v);
v3f					vfrac3f(v3f v, v3f *i);

float				v3fdotv3f(const v3f a, const v3f b);
float				v3fdotv3d(const v3f a, const v3d b);

v3f					v3fcrossv3f(const v3f a, const v3f b);
v3f					v3fcrossv3d(const v3f a, const v3d b);
v3f					*pv3fcrossv3f(v3f *v, const v3f b);
v3f					*pv3fcrossv3d(v3f *v, const v3d b);

v3f					inv3f(v3f a);
v3f					*invp3f(v3f *a);

/*
** v3d tool
*/

v3d					v3daddv3i(v3d a, v3i b);
v3d					v3daddv3f(v3d a, v3f b);
v3d					v3daddv3d(v3d a, v3d b);
v3d					*pv3daddv3i(v3d *a, const v3i b);
v3d					*pv3daddv3f(v3d *a, const v3f b);
v3d					*pv3daddv3d(v3d *a, const v3d b);

v3d					v3dsubv3i(v3d a, v3i b);
v3d					v3dsubv3f(v3d a, v3f b);
v3d					v3dsubv3d(v3d a, v3d b);
v3d					*pv3dsubv3i(v3d *a, const v3i b);
v3d					*pv3dsubv3f(v3d *a, const v3f b);
v3d					*pv3dsubv3d(v3d *a, const v3d b);

v3d					v3dmulv3i(v3d a, v3i b);
v3d					v3dmulv3f(v3d a, v3f b);
v3d					v3dmulv3d(v3d a, v3d b);
v3d					*pv3dmulv3i(v3d *a, const v3i b);
v3d					*pv3dmulv3f(v3d *a, const v3f b);
v3d					*pv3dmulv3d(v3d *a, const v3d b);

v3d					v3ddivv3i(v3d a, v3i b);
v3d					v3ddivv3f(v3d a, v3f b);
v3d					v3ddivv3d(v3d a, v3d b);
v3d					*pv3ddivv3i(v3d *a, const v3i b);
v3d					*pv3ddivv3f(v3d *a, const v3f b);
v3d					*pv3ddivv3d(v3d *a, const v3d b);

v3d					*normalize3d(v3d *v);
v3d					normalized3d(v3d v);
v3d					normlen3d(v3d v, double *nor);

double				v3ddotv3d(const v3d a, const v3d b);
double				v3ddotv3f(const v3d a, const v3f b);

v3d					v3dcrossv3d(const v3d a, const v3d b);
v3d					v3dcrossv3f(const v3d a, const v3f b);
v3d					*pv3dcrossv3d(v3d *v, const v3d b);
v3d					*pv3dcrossv3f(v3d *v, const v3f b);

v3d					inv3d(v3d a);
v3d					*invp3d(v3d *a);

/*
** v4i tool
*/

v4i					v4iaddv4i(v4i a, v4i b);
v4i					v4iaddv4f(v4i a, v4f b);
v4i					v4iaddv4d(v4i a, v4d b);
v4i					*pv4iaddv4i(v4i *a, const v4i b);
v4i					*pv4iaddv4f(v4i *a, const v4f b);
v4i					*pv4iaddv4d(v4i *a, const v4d b);

v4i					v4isubv4i(v4i a, v4i b);
v4i					v4isubv4f(v4i a, v4f b);
v4i					v4isubv4d(v4i a, v4d b);
v4i					*pv4isubv4i(v4i *a, const v4i b);
v4i					*pv4isubv4f(v4i *a, const v4f b);
v4i					*pv4isubv4d(v4i *a, const v4d b);

v4i					v4imulv4i(v4i a, v4i b);
v4i					v4imulv4f(v4i a, v4f b);
v4i					v4imulv4d(v4i a, v4d b);
v4i					*pv4imulv4i(v4i *a, const v4i b);
v4i					*pv4imulv4f(v4i *a, const v4f b);
v4i					*pv4imulv4d(v4i *a, const v4d b);

v4i					v4idivv4i(v4i a, v4i b);
v4i					v4idivv4f(v4i a, v4f b);
v4i					v4idivv4d(v4i a, v4d b);
v4i					*pv4idivv4i(v4i *a, const v4i b);
v4i					*pv4idivv4f(v4i *a, const v4f b);
v4i					*pv4idivv4d(v4i *a, const v4d b);

v4i					inv4i(v4i a);
v4i					*invp4i(v4i *a);

/*
** v4f tool
*/

v4f					v4faddv4i(v4f a, v4i b);
v4f					v4faddv4f(v4f a, v4f b);
v4f					v4faddv4d(v4f a, v4d b);
v4f					*pv4faddv4i(v4f *a, const v4i b);
v4f					*pv4faddv4f(v4f *a, const v4f b);
v4f					*pv4faddv4d(v4f *a, const v4d b);

v4f					v4fsubv4i(v4f a, v4i b);
v4f					v4fsubv4f(v4f a, v4f b);
v4f					v4fsubv4d(v4f a, v4d b);
v4f					*pv4fsubv4i(v4f *a, const v4i b);
v4f					*pv4fsubv4f(v4f *a, const v4f b);
v4f					*pv4fsubv4d(v4f *a, const v4d b);

v4f					v4fmulv4i(v4f a, v4i b);
v4f					v4fmulv4f(v4f a, v4f b);
v4f					v4fmulv4d(v4f a, v4d b);
v4f					*pv4fmulv4i(v4f *a, const v4i b);
v4f					*pv4fmulv4f(v4f *a, const v4f b);
v4f					*pv4fmulv4d(v4f *a, const v4d b);

v4f					v4fdivv4i(v4f a, v4i b);
v4f					v4fdivv4f(v4f a, v4f b);
v4f					v4fdivv4d(v4f a, v4d b);
v4f					*pv4fdivv4i(v4f *a, const v4i b);
v4f					*pv4fdivv4f(v4f *a, const v4f b);
v4f					*pv4fdivv4d(v4f *a, const v4d b);

v4f					*normalize4f(v4f *v);
v4f					normalized4f(v4f v);
v4f					normlen4f(v4f v, float *nor);

float				v4fdotv4f(const v4f a, const v4f b);
float				v4fdotv4d(const v4f a, const v4d b);

v4f					v4fcrossv4f(const v4f a, const v4f b);
v4f					v4fcrossv4d(const v4f a, const v4d b);
v4f					*pv4fcrossv4f(v4f *v, const v4f b);
v4f					*pv4fcrossv4d(v4f *v, const v4d b);

v4f					inv4f(v4f a);
v4f					*invp4f(v4f *a);

/*
** v4d tool
*/

v4d					v4daddv4i(v4d a, v4i b);
v4d					v4daddv4f(v4d a, v4f b);
v4d					v4daddv4d(v4d a, v4d b);
v4d					*pv4daddv4i(v4d *a, const v4i b);
v4d					*pv4daddv4f(v4d *a, const v4f b);
v4d					*pv4daddv4d(v4d *a, const v4d b);

v4d					v4dsubv4i(v4d a, v4i b);
v4d					v4dsubv4f(v4d a, v4f b);
v4d					v4dsubv4d(v4d a, v4d b);
v4d					*pv4dsubv4i(v4d *a, const v4i b);
v4d					*pv4dsubv4f(v4d *a, const v4f b);
v4d					*pv4dsubv4d(v4d *a, const v4d b);

v4d					v4dmulv4i(v4d a, v4i b);
v4d					v4dmulv4f(v4d a, v4f b);
v4d					v4dmulv4d(v4d a, v4d b);
v4d					*pv4dmulv4i(v4d *a, const v4i b);
v4d					*pv4dmulv4f(v4d *a, const v4f b);
v4d					*pv4dmulv4d(v4d *a, const v4d b);

v4d					v4ddivv4i(v4d a, v4i b);
v4d					v4ddivv4f(v4d a, v4f b);
v4d					v4ddivv4d(v4d a, v4d b);
v4d					*pv4ddivv4i(v4d *a, const v4i b);
v4d					*pv4ddivv4f(v4d *a, const v4f b);
v4d					*pv4ddivv4d(v4d *a, const v4d b);

v4d					*normalize4d(v4d *v);
v4d					normalized4d(v4d v);
v4d					normlen4d(v4d v, double *nor);

double				v4ddotv4f(const v4d a, const v4f b);
double				v4ddotv4d(const v4d a, const v4d b);

v4d					v4dcrossv4f(const v4d a, const v4f b);
v4d					v4dcrossv4d(const v4d a, const v4d b);
v4d					*pv4dcrossv4f(v4d *v, const v4f b);
v4d					*pv4dcrossv4d(v4d *v, const v4d b);

v4d					inv4d(v4d a);
v4d					*invp4d(v4d *a);

/*
** UV tools
*/

v2f					nortouv(v3f nor);

unsigned long		uvl(unsigned int x, unsigned int y, unsigned int xlen);
unsigned long		uvtolen(v2ui uv, unsigned int x);
unsigned long		uvitolen(v2i uv, unsigned int x);
unsigned long		uvftolen(v2f uv, unsigned int x);

#endif

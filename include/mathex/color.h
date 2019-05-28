/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 18:09:51 by qloubier          #+#    #+#             */
/*   Updated: 2019/05/28 17:52:30 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLOR_H
# define COLOR_H

# include "mathex/fixedfloat.h"
# include "mathex/vector.h"

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

t_v4f				rgbatov4f(t_rgba col);
t_v3f				rgbatov3f(t_rgba col);
t_v3f				rgbtov3f(t_rgb col);
t_v4f				rgbtov4f(t_rgb col);
t_rgba				v4ftorgba(t_v4f vcol);
t_rgb				v4ftorgb(t_v4f vcol);
t_rgba				v3ftorgba(t_v3f vcol);
t_rgb				v3ftorgb(t_v3f vcol);

unsigned int		v4ftoui(t_v4f vcol);
unsigned int		v3ftoui(t_v3f vcol);
unsigned int		rgbatoui(t_rgba col);
unsigned int		rgbtoui(t_rgb vcol);

#endif

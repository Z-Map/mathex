/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/08 04:31:29 by qloubier          #+#    #+#             */
/*   Updated: 2017/06/19 11:19:41 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

int				mxabs(int a);
float			mxabsf(float a);
int				mxmax(int a, int b);
int				mxmin(int a, int b);
unsigned int	mxmaxu(unsigned int a, unsigned int b);
unsigned int	mxminu(unsigned int a, unsigned int b);
int				mxmaxpos(int a, int b);
int				mxminpos(int a, int b);
float			mxmaxf(float a, float b);
float			mxminf(float a, float b);
float			mxmaxposf(float a, float b);
float			mxminposf(float a, float b);
void			swap(unsigned int *a, unsigned int *b);
void			swapf(float *a, float *b);

float			mxfracf(register float d);
double			mxfrac(register double d);

int				mxrange(int a, int min, int max);
unsigned int	mxrangeu(unsigned int a, unsigned int min, unsigned int max);
float			mxrangef(float a, float min, float max);
double			mxranged(double a, double min, double max);

int				mxlerpi(int a, int b, float coef);
float			mxlerp(float a, float b, float coef);
double			mxlerpd(double a, double b, double coef);

int				mxbilerpi(int v[4], float coef[2]);
float			mxbilerp(float v[4], float coef[2]);
double			mxbilerpd(double v[4], double coef[2]);

int				mxtrilerpi(int v[8], float coef[3]);
float			mxtrilerp(float v[8], float coef[3]);
double			mxtrilerpd(double v[8], double coef[3]);

#endif

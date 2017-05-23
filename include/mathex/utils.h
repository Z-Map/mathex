/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/08 04:31:29 by qloubier          #+#    #+#             */
/*   Updated: 2017/05/23 22:08:07 by qloubier         ###   ########.fr       */
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

#endif

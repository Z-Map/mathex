/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/08 04:31:29 by qloubier          #+#    #+#             */
/*   Updated: 2016/11/25 04:30:52 by qloubier         ###   ########.fr       */
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
float			mxmaxf(float a, float b);
float			mxminf(float a, float b);
void			swap(unsigned int *a, unsigned int *b);
void			swapf(float *a, float *b);

#endif

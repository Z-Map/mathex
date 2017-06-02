/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quaternion.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 23:38:10 by qloubier          #+#    #+#             */
/*   Updated: 2017/05/25 13:28:21 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef QUATERNION_H
#define QUATERNION_H

typedef struct		s_quaternion
{
	double			r;
	double			i;
	double			j;
	double			k;
}					t_quat;

typedef struct		s_quaternion_float
{
	float			r;
	float			i;
	float			j;
	float			k;
}					t_quatf;

t_quat		quat_identity();
t_quat		quat_mult();

#endif

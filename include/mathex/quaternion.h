/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quaternion.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 23:38:10 by qloubier          #+#    #+#             */
/*   Updated: 2017/06/26 18:06:21 by lcarreel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef QUATERNION_H
#define QUATERNION_H

# include <math.h>
# include "mathex/vector.h"
# include "mathex/matrix.h"

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

t_quat		quat_identity(void);
t_quat		quat_mult(t_quat a, t_quat b);
t_quat		quat_inv(const t_quat q);
t_quat		quat_rot(t_v3d axis, double rot);
t_mat4d		quat_tomatrix(const t_quat q);
t_mat4d		quat_tomatrix_offset(const t_quat q, const t_v4d offset);

t_quatf		quatf_identity(void);
t_quatf		quatf_mult(t_quatf a, t_quatf b);
t_quatf		quatf_inv(const t_quatf q);
t_quatf		quatf_rot(t_v3f axis, float rot);
t_mat4f		quatf_tomatrix(const t_quatf q);
t_mat4f		quatf_tomatrix_offset(const t_quatf q, const t_v4f offset);

#endif

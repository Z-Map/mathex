/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quaternion.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 23:38:10 by qloubier          #+#    #+#             */
/*   Updated: 2017/07/05 16:55:50 by qloubier         ###   ########.fr       */
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
}					quat;

typedef struct		s_quaternion_float
{
	float			r;
	float			i;
	float			j;
	float			k;
}					quatf;

quat				quat_identity(void);
quat				quat_mult(quat a, quat b);
quat				quat_inv(const quat q);
quat				quat_rot(v3d axis, double rot);
mat4d				quat_tomatrix(const quat q);
mattd				quat_totransform(const quat q);
mat4d				quat_tomatrix_offset(const quat q, const v4d offset);
mattd				quat_totransform_offset(const quat q, const v3d offset);

quatf				quatf_identity(void);
quatf				quatf_mult(quatf a, quatf b);
quatf				quatf_inv(const quatf q);
quatf				quatf_rot(v3f axis, float rot);
mat4f				quatf_tomatrix(const quatf q);
mattf				quatf_totransform(const quatf q);
mat4f				quatf_tomatrix_offset(const quatf q, const v4f offset);
mattf				quatf_totransform_offset(const quatf q, const v3f offset);

#endif

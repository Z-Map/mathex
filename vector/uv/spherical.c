/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spherical.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 17:39:17 by qloubier          #+#    #+#             */
/*   Updated: 2017/06/11 18:22:32 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "mathex/vector.h"

t_v2f		nortouv(t_v3f nor)
{
	t_v3f	v;
	float	a;
	float	b;

	v = (t_v3f){nor.x, nor.y, 0.0};
	if (v.z >= 1.0f)
		v = (t_v3f){0.0, 1.0, 0.0};
	normalize3f(&v);
	a = acosf(v.y) / (float)M_PI;
	if (v.x > 0.0f)
		a = 0.5f + (a / 2.0f);
	else
		a = 0.5f - (a / 2.0f);
	b = acosf(nor.z) / (float)M_PI;
	return ((t_v2f){a,b});
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spherical.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 17:39:17 by qloubier          #+#    #+#             */
/*   Updated: 2017/06/15 09:42:30 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "mathex/utils.h"
#include "mathex/vector.h"

t_v2f		nortouv(t_v3f nor)
{
	t_v3f	v;
	float	a;
	float	b;

	v = (t_v3f){nor.x, nor.y, 0.0};
	if ((nor.z >= 1.0f) || (nor.z <= -1.0f))
		v = (t_v3f){0.0, 1.0, 0.0};
	normalize3f(&v);
	if (v.x >= 1.0f)
		a = 0.0f;
	else if (v.x <= -1.0f)
		a = 0.5f;
	else
		a = acosf(v.x) / (float)(M_PI * 2);
	// a = (v.y + 1.0f) / 4.0f;
	if (v.y < 0.0f)
		a = 1.0f - a;
	// b = 1.0f - ((nor.z + 1.0f) / 2.0f);
	b = acosf(nor.z) / (float)M_PI;
	return ((t_v2f){a,b});
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spherical.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 17:39:17 by qloubier          #+#    #+#             */
/*   Updated: 2017/07/05 17:52:44 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "mathex/utils.h"
#include "mathex/vector.h"

v2f		nortouv(v3f nor)
{
	v3f	v;
	float	a;
	float	b;

	v = (v3f){nor.x, nor.y, 0.0};
	if ((nor.z >= 1.0f) || (nor.z <= -1.0f))
		v = (v3f){0.0, 1.0, 0.0};
	normalize3f(&v);
	if (v.x >= 1.0f)
		a = 0.0f;
	else if (v.x <= -1.0f)
		a = 0.5f;
	else
		a = acosf(v.x) / (float)(M_PI * 2);
	if (v.y < 0.0f)
		a = 1.0f - a;
	b = acosf(nor.z) / (float)M_PI;
	return ((v2f){a,b});
}

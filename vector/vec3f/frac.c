/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   frac.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 19:33:16 by qloubier          #+#    #+#             */
/*   Updated: 2017/06/11 14:10:10 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "mathex/vector.h"

v3f				frac3f(v3f v)
{
	float			i;

	return ((v3f){modff(v.x, &i), modff(v.y, &i), modff(v.z, &i)});
}

v3f				*pfrac3f(v3f *v)
{
	float			i;

	*v = (v3f){modff(v->x, &i), modff(v->y, &i), modff(v->z, &i)};
	return (v);
}

v3f				vfrac3f(v3f v, v3f *i)
{
	return ((v3f){modff(v.x, &(i->x)),
		modff(v.y, &(i->y)), modff(v.z, &(i->z))});
}

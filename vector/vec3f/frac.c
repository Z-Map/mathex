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

t_v3f				frac3f(t_v3f v)
{
	float			i;

	return ((t_v3f){modff(v.x, &i), modff(v.y, &i), modff(v.z, &i)});
}

t_v3f				*pfrac3f(t_v3f *v)
{
	float			i;

	*v = (t_v3f){modff(v->x, &i), modff(v->y, &i), modff(v->z, &i)};
	return (v);
}

t_v3f				vfrac3f(t_v3f v, t_v3f *i)
{
	return ((t_v3f){modff(v.x, &(i->x)),
		modff(v.y, &(i->y)), modff(v.z, &(i->z))});
}

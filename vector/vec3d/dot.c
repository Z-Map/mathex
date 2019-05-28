/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dot.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 20:41:32 by qloubier          #+#    #+#             */
/*   Updated: 2019/05/28 17:53:55 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "mathex/vector.h"

double		v3ddotv3d(const t_v3d a, const t_v3d b)
{
	return (a.x * b.x + a.y * b.y + a.z * b.z);
}

double		v3ddotv3f(const t_v3d a, const t_v3f b)
{
	return (a.x * (double)b.x + a.y * (double)b.y + a.z * (double)b.z);
}

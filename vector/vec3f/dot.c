/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dot.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 20:41:32 by qloubier          #+#    #+#             */
/*   Updated: 2017/06/02 21:41:51 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "mathex/vector.h"

float		v3fdotv3f(const t_v3f a, const t_v3f b)
{
	return (a.x * b.x + a.y * b.y + a.z * b.z);
}

float		v3fdotv3d(const t_v3f a, const t_v3d b)
{
	return (a.x * (float)b.x + a.y * (float)b.y + a.z * (float)b.z);
}

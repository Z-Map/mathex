/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dot.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 20:41:32 by qloubier          #+#    #+#             */
/*   Updated: 2017/06/09 09:37:07 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "mathex/vector.h"

float		v4fdotv4f(const t_v4f a, const t_v4f b)
{
	return (a.x * b.x + a.y * b.y + a.z * b.z + a.w * b.w);
}

float		v4fdotv4d(const t_v4f a, const t_v4d b)
{
	return (a.x * (float)b.x + a.y * (float)b.y + a.z * (float)b.z
		+ a.w * (float)b.w);
}

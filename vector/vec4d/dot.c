/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dot.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 20:41:32 by qloubier          #+#    #+#             */
/*   Updated: 2017/07/07 09:22:57 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "mathex/vector.h"

double		v4ddotv4f(const v4d a, const v4f b)
{
	return (a.x * (double)b.x + a.y * (double)b.y + a.z * (double)b.z
		+ a.w * (double)b.w);
}

double		v4ddotv4d(const v4d a, const v4d b)
{
	return (a.x * b.x + a.y * b.y + a.z * b.z + a.w * b.w);
}

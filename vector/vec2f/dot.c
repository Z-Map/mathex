/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dot.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 20:41:32 by qloubier          #+#    #+#             */
/*   Updated: 2017/06/02 21:37:30 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "mathex/vector.h"

float		v2fdotv2f(const v2f a, const v2f b)
{
	return (a.x * b.x + a.y * b.y);
}

float		v2fdotv2d(const v2f a, const v2d b)
{
	return (a.x * (float)b.x + a.y * (float)b.y);
}

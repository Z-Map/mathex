/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dot.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 20:41:32 by qloubier          #+#    #+#             */
/*   Updated: 2017/06/02 21:40:49 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "mathex/vector.h"

double		v2ddotv2d(const t_v2d a, const t_v2d b)
{
	return (a.x * b.x + a.y * b.y);
}

double		v2ddotv2f(const t_v2d a, const t_v2f b)
{
	return (a.x * (double)b.x + a.y * (double)b.y);
}

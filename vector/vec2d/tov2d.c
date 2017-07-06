/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tov2d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/19 19:49:30 by qloubier          #+#    #+#             */
/*   Updated: 2016/06/26 21:41:12 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

v2d					nv2d(double i)
{
	return ((v2d){i, i});
}

v2d					v3to2d(v3d vec)
{
	return ((v2d){vec.x, vec.y});
}

v2d					v4to2d(v4d vec)
{
	return ((v2d){vec.x, vec.y});
}

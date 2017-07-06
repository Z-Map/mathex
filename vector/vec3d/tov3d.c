/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tov3d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/21 01:29:16 by qloubier          #+#    #+#             */
/*   Updated: 2016/06/26 21:42:03 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

v3d					nv3d(double i)
{
	return ((v3d){i, i, i});
}

v3d					v2to3d(v2d vec)
{
	return ((v3d){vec.x, vec.y, 0.0});
}

v3d					v4to3d(v4d vec)
{
	return ((v3d){vec.x, vec.y, vec.z});
}

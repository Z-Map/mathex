/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tov4d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/21 01:37:48 by qloubier          #+#    #+#             */
/*   Updated: 2019/05/28 17:18:32 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

t_v4d		nv4d(double i)
{
	return ((t_v4d){i, i, i, i});
}

t_v4d		v2to4d(t_v2d vec)
{
	return ((t_v4d){vec.x, vec.y, 0.0, 0.0});
}

t_v4d		v3to4d(t_v3d vec)
{
	return ((t_v4d){vec.x, vec.y, vec.z, 0.0});
}

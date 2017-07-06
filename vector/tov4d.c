/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tov4d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/21 01:37:48 by qloubier          #+#    #+#             */
/*   Updated: 2017/06/19 11:29:57 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

v4d					nv4d(double i)
{
	return ((v4d){i, i, i, i});
}

v4d				v2to4d(v2d vec)
{
	return ((v4d){vec.x, vec.y, 0.0, 0.0});
}

v4d				v3to4d(v3d vec)
{
	return ((v4d){vec.x, vec.y, vec.z, 0.0});
}

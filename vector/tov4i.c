/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tov4i.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/21 01:39:44 by qloubier          #+#    #+#             */
/*   Updated: 2017/06/19 11:31:44 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

v4i					nv4i(int i)
{
	return ((v4i){i, i, i, i});
}

v4i				v2to4i(v2i vec)
{
	return ((v4i){vec.x, vec.y, 0.0, 0.0});
}

v4i				v3to4i(v3i vec)
{
	return ((v4i){vec.x, vec.y, vec.z, 0.0});
}

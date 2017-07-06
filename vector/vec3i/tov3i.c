/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tov3i.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/21 01:39:57 by qloubier          #+#    #+#             */
/*   Updated: 2016/02/21 02:05:27 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

v3i					nv3i(int i)
{
	return ((v3i){i, i, i});
}

v3i					v2to3i(v2i vec)
{
	return ((v3i){vec.x, vec.y, 0});
}

v3i					v4to3i(v4i vec)
{
	return ((v3i){vec.x, vec.y, vec.z});
}

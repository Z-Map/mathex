/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tov4i.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/21 01:29:16 by qloubier          #+#    #+#             */
/*   Updated: 2019/05/28 16:47:43 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

t_v4i					nv4i(int i)
{
	return ((t_v4i){i, i, i, i});
}

t_v4i					v2to4i(t_v2i vec)
{
	return ((t_v4i){vec.x, vec.y, 0.0f, 0.0f});
}

t_v4i					v3to4i(t_v3i vec)
{
	return ((t_v4i){vec.x, vec.y, vec.z, 0.0f});
}

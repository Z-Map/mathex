/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tov2i.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 21:45:33 by qloubier          #+#    #+#             */
/*   Updated: 2019/05/28 16:47:43 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

t_v2i					nv2i(int i)
{
	return ((t_v2i){i, i});
}

t_v2i					v3to2i(t_v3i vec)
{
	return ((t_v2i){vec.x, vec.y});
}

t_v2i					v4to2i(t_v4i vec)
{
	return ((t_v2i){vec.x, vec.y});
}

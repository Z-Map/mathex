/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tov2i.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 21:45:33 by qloubier          #+#    #+#             */
/*   Updated: 2016/02/21 01:41:47 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

v2i					nv2i(int i)
{
	return ((v2i){i, i});
}

v2i					v3to2i(v3i vec)
{
	return ((v2i){vec.x, vec.y});
}

v2i					v4to2i(v4i vec)
{
	return ((v2i){vec.x, vec.y});
}

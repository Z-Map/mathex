/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tov4f.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/21 01:29:16 by qloubier          #+#    #+#             */
/*   Updated: 2017/07/06 15:16:56 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

v4i					nv4i(int i)
{
	return ((v4i){i, i, i, i});
}

v4i					v2to4i(v2i vec)
{
	return ((v4i){vec.x, vec.y, 0.0f, 0.0f});
}

v4i					v3to4i(v3i vec)
{
	return ((v4i){vec.x, vec.y, vec.z, 0.0f});
}

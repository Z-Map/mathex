/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tov2f.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/19 19:49:30 by qloubier          #+#    #+#             */
/*   Updated: 2016/02/21 01:33:04 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

v2f					nv2f(float i)
{
	return ((v2f){i, i});
}

v2f					v3to2f(v3f vec)
{
	return ((v2f){vec.x, vec.y});
}

v2f					v4to2f(v4f vec)
{
	return ((v2f){vec.x, vec.y});
}

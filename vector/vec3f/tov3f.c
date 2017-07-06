/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tov3f.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/21 01:29:16 by qloubier          #+#    #+#             */
/*   Updated: 2016/02/21 01:33:48 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

v3f					nv3f(float i)
{
	return ((v3f){i, i, i});
}

v3f					v2to3f(v2f vec)
{
	return ((v3f){vec.x, vec.y, 0.0f});
}

v3f					v4to3f(v4f vec)
{
	return ((v3f){vec.x, vec.y, vec.z});
}

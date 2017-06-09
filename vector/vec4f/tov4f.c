/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tov4f.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/21 01:29:16 by qloubier          #+#    #+#             */
/*   Updated: 2017/06/09 09:43:33 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

t_v4f					nv4f(float i)
{
	return ((t_v4f){i, i, i, i});
}

t_v4f					v2to4f(t_v2f vec)
{
	return ((t_v4f){vec.x, vec.y, 0.0f, 0.0f});
}

t_v4f					v3to4f(t_v4f vec)
{
	return ((t_v4f){vec.x, vec.y, vec.z, 0.0f});
}

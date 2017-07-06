/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   div3i.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 01:12:31 by qloubier          #+#    #+#             */
/*   Updated: 2017/05/25 01:18:16 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

v3i					v3idivv3i(v3i a, v3i b)
{
	return ((v3i){ a.x / b.x, a.y / b.y, a.z / b.z});
}

v3i					*pv3idivv3i(v3i *a, const v3i b)
{
	a->x /= b.x;
	a->y /= b.y;
	a->z /= b.z;
	return (a);
}

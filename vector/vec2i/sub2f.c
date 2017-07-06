/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sub2f.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 01:12:31 by qloubier          #+#    #+#             */
/*   Updated: 2017/05/25 01:27:38 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

v2i					v2isubv2f(v2i a, v2f b)
{
	return ((v2i){ a.x - (int)b.x, a.y - (int)b.y });
}

v2i					*pv2isubv2f(v2i *a, const v2f b)
{
	a->x -= (int)b.x;
	a->y -= (int)b.y;
	return (a);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add2i.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 01:06:47 by qloubier          #+#    #+#             */
/*   Updated: 2017/05/25 14:31:26 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

v2f					v2faddv2i(v2f a, v2i b)
{
	return ((v2f){ a.x + (float)b.x, a.y + (float)b.y });
}

v2f					*pv2faddv2i(v2f *a, const v2i b)
{
	a->x += (float)b.x;
	a->y += (float)b.y;
	return (a);
}

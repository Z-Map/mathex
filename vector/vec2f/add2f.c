/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add2f.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 01:06:47 by qloubier          #+#    #+#             */
/*   Updated: 2019/05/28 17:53:55 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

t_v2f					v2faddv2f(t_v2f a, t_v2f b)
{
	return ((t_v2f){ a.x + b.x, a.y + b.y });
}

t_v2f					*pv2faddv2f(t_v2f *a, const t_v2f b)
{
	a->x += b.x;
	a->y += b.y;
	return (a);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add2f.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 01:06:47 by qloubier          #+#    #+#             */
/*   Updated: 2017/05/25 01:27:44 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

t_v2i					v2iaddv2f(t_v2i a, t_v2f b)
{
	return ((t_v2i){ a.x + (int)b.x, a.y + (int)b.y });
}

t_v2i					*pv2iaddv2f(t_v2i *a, const t_v2f *b)
{
	a->x += (int)b->x;
	a->y += (int)b->y;
	return (a);
}
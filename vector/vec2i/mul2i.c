/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mul2i.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 01:06:47 by qloubier          #+#    #+#             */
/*   Updated: 2017/05/25 14:50:29 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

t_v2i					v2imulv2i(t_v2i a, t_v2i b)
{
	return ((t_v2i){ a.x * b.x, a.y * b.y });
}

t_v2i					*pv2imulv2i(t_v2i *a, const t_v2i b)
{
	a->x *= b.x;
	a->y *= b.y;
	return (a);
}

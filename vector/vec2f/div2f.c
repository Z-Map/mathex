/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   div2f.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/16 01:12:31 by qloubier          #+#    #+#             */
/*   Updated: 2017/06/11 22:27:04 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

t_v2f					v2fdivv2f(t_v2f a, t_v2f b)
{
	return ((t_v2f){ a.x / b.x, a.y / b.y});
}

t_v2f					*pv2fdivv2f(t_v2f *a, const t_v2f b)
{
	a->x /= b.x;
	a->y /= b.y;
	return (a);
}

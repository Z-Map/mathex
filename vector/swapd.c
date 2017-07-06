/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapd.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/21 22:18:09 by qloubier          #+#    #+#             */
/*   Updated: 2016/11/25 05:15:00 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

void			swapv2d(v2d *a, v2d *b)
{
	v2d	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void			swapv3d(v3d *a, v3d *b)
{
	v3d	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void			swapv4d(v4d *a, v4d *b)
{
	v4d	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

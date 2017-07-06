/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapi.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/28 03:58:15 by qloubier          #+#    #+#             */
/*   Updated: 2016/03/28 04:42:41 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

void			swapv2i(v2i *a, v2i *b)
{
	v2i	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void			swapv3i(v3i *a, v3i *b)
{
	v3i	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void			swapv4i(v4i *a, v4i *b)
{
	v4i	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

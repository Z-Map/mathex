/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/21 22:18:09 by qloubier          #+#    #+#             */
/*   Updated: 2016/03/21 22:20:51 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

void			swapv2f(v2f *a, v2f *b)
{
	v2f	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void			swapv3f(v3f *a, v3f *b)
{
	v3f	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void			swapv4f(v4f *a, v4f *b)
{
	v4f	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

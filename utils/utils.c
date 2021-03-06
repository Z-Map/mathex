/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 17:43:23 by qloubier          #+#    #+#             */
/*   Updated: 2017/05/23 18:45:29 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/utils.h"

int			mxabs(int a)
{
	if (a < 0)
		return (-a);
	return (a);
}

int			mxmax(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}

int			mxmin(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}

int			mxmaxpos(int a, int b)
{
	a = (a > b) ? a : b;
	return ((a < 0) ? 0 : a);
}

int			mxminpos(int a, int b)
{
	if ((a < b) && (a > 0))
		return (a);
	return ((b < 0) ? 0 : b);
}

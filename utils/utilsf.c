/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilsf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/29 09:54:44 by qloubier          #+#    #+#             */
/*   Updated: 2019/05/28 17:17:15 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/utils.h"

float		mxabsf(float a)
{
	if (a < 0)
		return (-a);
	return (a);
}

float		mxmaxf(float a, float b)
{
	if (a > b)
		return (a);
	return (b);
}

float		mxminf(float a, float b)
{
	if (a < b)
		return (a);
	return (b);
}

float		mxmaxposf(float a, float b)
{
	a = (a > b) ? a : b;
	return ((a < 0.0f) ? 0.0f : a);
}

float		mxminposf(float a, float b)
{
	if ((a < b) && (a > 0.0f))
		return (a);
	return ((b < 0.0f) ? 0.0f : b);
}

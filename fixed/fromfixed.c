/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fromfixed.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 04:03:11 by qloubier          #+#    #+#             */
/*   Updated: 2016/04/21 14:54:44 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixedfloat.h"
#include "mask.h"

int		fixtoi(const void *fixed)
{
	return (*((int *)fixed) >> FIF_INTSHIFT);
}

int		roundfix(const void *fixed)
{
	int		i;

	i = *((int *)fixed);
	return ((i & FIF_ROUNDMASK ? 1 : 0) + (i >> FIF_INTSHIFT));
}

float	fixtof(const void *fixed)
{
	unsigned int	num;
	float			ret;

	num = *((unsigned int *)fixed);
	ret = (float)((num & MUSIGN) >> FIF_INTSHIFT);
	ret += (float)(num & FIF_FRACPOW) / (float)(FIF_FRACPOW);
	if (num & MSIGN)
		ret = -ret;
	return (ret);
}

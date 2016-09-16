/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toifixed.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 04:03:42 by qloubier          #+#    #+#             */
/*   Updated: 2016/04/21 14:55:07 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixedfloat.h"
#include "mask.h"

int			toifix(t_fix fixed)
{
	return (*((int *)(&fixed)));
}

int			itoifix(int num)
{
	if (num < 0)
		return ((MSIGN) | (unsigned int)(-num << FIF_INTSHIFT));
	return ((MUSIGN) & (unsigned int)(num << FIF_INTSHIFT));
}

int			ftoifix(float num)
{
	unsigned int	ret;

	ret = 0;
	if (num < 0)
	{
		ret |= MSIGN;
		num = -num;
	}
	ret |= ((int)num) << FIF_INTSHIFT;
	num = (float)(num - (int)num) * (float)(FIF_FRACPOW);
	ret |= (int)num;
	num -= (int)num;
	if (num >= 0.5f)
		ret += 1;
	return ((int)ret);
}

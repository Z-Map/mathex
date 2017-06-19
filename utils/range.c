/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/19 11:02:35 by qloubier          #+#    #+#             */
/*   Updated: 2017/06/19 11:32:08 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/utils.h"

int				mxrange(int a, int min, int max)
{
	if (a < min)
		return (min);
	else if (a > max)
		return (max);
	else
		return (a);
}

unsigned int	mxrangeu(unsigned int a, unsigned int min, unsigned int max)
{
	if (a < min)
		return (min);
	else if (a > max)
		return (max);
	else
		return (a);
}

float			mxrangef(float a, float min, float max)
{
	if (a < min)
		return (min);
	else if (a > max)
		return (max);
	else
		return (a);
}

double			mxranged(double a, double min, double max)
{
	if (a < min)
		return (min);
	else if (a > max)
		return (max);
	else
		return (a);
}

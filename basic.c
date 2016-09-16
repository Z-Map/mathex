/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 17:43:23 by qloubier          #+#    #+#             */
/*   Updated: 2016/04/29 09:56:52 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basic.h"

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

void		swap(unsigned int *a, unsigned int *b)
{
	register unsigned int	tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}

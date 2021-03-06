/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 18:28:18 by qloubier          #+#    #+#             */
/*   Updated: 2019/05/28 17:16:57 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/utils.h"

void		swap(unsigned int *a, unsigned int *b)
{
	register unsigned int	tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}

void		swapf(float *a, float *b)
{
	register float	tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}

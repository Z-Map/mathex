/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uv.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 08:53:27 by qloubier          #+#    #+#             */
/*   Updated: 2017/06/09 09:02:06 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/vector.h"

unsigned long		uvl(unsigned int x, unsigned int y, unsigned int xlen)
{
	return ((unsigned long)((y * xlen) + x));
}

unsigned long		uvtolen(v2ui uv, unsigned int x)
{
	return ((unsigned long)((uv.y * x) + uv.x));
}

unsigned long		uvitolen(v2i uv, unsigned int x)
{
	return ((unsigned long)(((unsigned int)uv.y * x) + (unsigned int)uv.x));
}

unsigned long		uvftolen(v2f uv, unsigned int x)
{
	return ((unsigned long)(((unsigned int)uv.y * x) + (unsigned int)uv.x));
}

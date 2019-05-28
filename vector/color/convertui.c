/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convertui.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 08:13:14 by qloubier          #+#    #+#             */
/*   Updated: 2019/05/28 17:53:55 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/utils.h"
#include "mathex/color.h"

unsigned int		v4ftoui(t_v4f vcol)
{
	unsigned int	col;

	col = mxminu((unsigned int)(vcol.x * 255.0f), 255u) |
		(mxminu((unsigned int)(vcol.y * 255.0f), 255u) << 8) |
		(mxminu((unsigned int)(vcol.z * 255.0f), 255u) << 16) |
		(mxminu((unsigned int)(vcol.w * 255.0f), 255u) << 24);
	return (col);
}

unsigned int		v3ftoui(t_v3f vcol)
{
	unsigned int	col;

	col = mxminu((unsigned int)(vcol.x * 255.0f), 255u) |
		(mxminu((unsigned int)(vcol.y * 255.0f), 255u) << 8) |
		(mxminu((unsigned int)(vcol.z * 255.0f), 255u) << 16) | 0xFF000000;
	return (col);
}

unsigned int		rgbatoui(t_rgba vcol)
{
	unsigned int	col;

	col = (unsigned int)vcol.r | ((unsigned int)vcol.g << 8) |
		((unsigned int)vcol.b << 16) | (unsigned int)vcol.a << 24;
	return (col);
}

unsigned int		rgbtoui(t_rgb vcol)
{
	unsigned int	col;

	col = (unsigned int)vcol.r | ((unsigned int)vcol.g << 8) |
		((unsigned int)vcol.b << 16) | 0xFF000000;
	return (col);
}

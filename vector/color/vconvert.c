/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vconvert.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 22:51:15 by qloubier          #+#    #+#             */
/*   Updated: 2017/06/19 11:34:42 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/utils.h"
#include "mathex/color.h"

t_rgba				v4ftorgba(t_v4f vcol)
{
	return ((t_rgba){
		(unsigned char)mxminu((unsigned int)(vcol.x * 255.0f), 255u),
		(unsigned char)mxminu((unsigned int)(vcol.y * 255.0f), 255u),
		(unsigned char)mxminu((unsigned int)(vcol.z * 255.0f), 255u),
		(unsigned char)mxminu((unsigned int)(vcol.w * 255.0f), 255u)});
}

t_rgb				v4ftorgb(t_v4f vcol)
{
	return ((t_rgb){
		(unsigned char)mxminu((unsigned int)(vcol.x * 255.0f), 255u),
		(unsigned char)mxminu((unsigned int)(vcol.y * 255.0f), 255u),
		(unsigned char)mxminu((unsigned int)(vcol.z * 255.0f), 255u)});
}

t_rgba				v3ftorgba(t_v3f vcol)
{
	return ((t_rgba){
		(unsigned char)mxminu((unsigned int)(vcol.x * 255.0f), 255u),
		(unsigned char)mxminu((unsigned int)(vcol.y * 255.0f), 255u),
		(unsigned char)mxminu((unsigned int)(vcol.z * 255.0f), 255u),
		255u});
}

t_rgb				v3ftorgb(t_v3f vcol)
{
	return ((t_rgb){
		(unsigned char)mxminu((unsigned int)(vcol.x * 255.0f), 255u),
		(unsigned char)mxminu((unsigned int)(vcol.y * 255.0f), 255u),
		(unsigned char)mxminu((unsigned int)(vcol.z * 255.0f), 255u)});
}

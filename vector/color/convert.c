/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 08:13:14 by qloubier          #+#    #+#             */
/*   Updated: 2017/06/19 11:34:29 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/color.h"

t_v4f				rgbatov4f(t_rgba col)
{
	return ((t_v4f){
		(float)col.r / 255.0f,
		(float)col.g / 255.0f,
		(float)col.b / 255.0f,
		(float)col.a / 255.0f});
}

t_v3f				rgbatov3f(t_rgba col)
{
	return ((t_v3f){
		(float)col.r / 255.0f,
		(float)col.g / 255.0f,
		(float)col.b / 255.0f});
}

t_v3f				rgbtov3f(t_rgb col)
{
	return ((t_v3f){
		(float)col.r / 255.0f,
		(float)col.g / 255.0f,
		(float)col.b / 255.0f});
}

t_v4f				rgbtov4f(t_rgb col)
{
	return ((t_v4f){
		(float)col.r / 255.0f,
		(float)col.g / 255.0f,
		(float)col.b / 255.0f, 1.0f});
}

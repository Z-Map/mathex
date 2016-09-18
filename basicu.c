/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basicu.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/27 00:06:38 by qloubier          #+#    #+#             */
/*   Updated: 2016/05/27 00:07:33 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basic.h"

t_ui		mxmaxu(t_ui a, t_ui b)
{
	if (a > b)
		return (a);
	return (b);
}

t_ui		mxminu(t_ui a, t_ui b)
{
	if (a < b)
		return (a);
	return (b);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quat_identity.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/26 15:50:50 by lcarreel          #+#    #+#             */
/*   Updated: 2019/05/28 17:10:44 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/quaternion.h"

t_quat		quat_identity(void)
{
	return ((t_quat){.r = 1.0, .i = 0.0, .j = 0.0, .k = 0.0});
}

t_quatf		quatf_identity(void)
{
	return ((t_quatf){.r = 1.0, .i = 0.0, .j = 0.0, .k = 0.0});
}

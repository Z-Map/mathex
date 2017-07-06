/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quat_identity.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarreel <lcarreel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/26 15:50:50 by lcarreel          #+#    #+#             */
/*   Updated: 2017/06/26 18:08:23 by lcarreel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mathex/quaternion.h"

quat		quat_identity(void)
{
	return ((quat){.r = 1.0, .i = 0.0, .j = 0.0, .k = 0.0});
}

quatf		quatf_identity(void)
{
	return ((quatf){.r = 1.0, .i = 0.0, .j = 0.0, .k = 0.0});
}

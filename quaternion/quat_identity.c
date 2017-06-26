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

t_quat		quat_identity(void)
{
	return ((t_quat){.r = 1.0, .i = 0.0, .j = 0.0, .k = 0.0});
}

t_quatf		quatf_identity(void)
{
	return ((t_quatf){.r = 1.0, .i = 0.0, .j = 0.0, .k = 0.0});
}

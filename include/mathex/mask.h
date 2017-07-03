/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mask.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/17 16:54:36 by qloubier          #+#    #+#             */
/*   Updated: 2017/07/04 01:09:36 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MASK_H
# define MASK_H

# define MSIGN_C	0x80u
# define MUSIGN_C	0x7Fu

# define MSIGN_S	0x8000u
# define MUSIGN_S	0x7FFFu

# define MSIGN		(unsigned int)0x80000000
# define MUSIGN		(unsigned int)0x7FFFFFFF

# define MSIGN_L	0x8000000000000000ul
# define MUSIGN_L	0x7FFFFFFFFFFFFFFFul

# define FLOAT_EXP	0x7f800000u
# define FLOAT_MAN	0x007fffffu

# define DOUBLE_EXP	0x7ff0000000000000ul
# define DOUBLE_MAN	0x000ffffffffffffful

#endif

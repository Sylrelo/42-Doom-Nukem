/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   float_cmp.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: slopez <slopez@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/29 18:30:43 by slopez       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/29 18:30:53 by slopez      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int			floatcmp(float f1, float f2, float p)
{
	return (((f1 - p) < f2 && (f1 + p) > f2) ? 1 : 0);
}
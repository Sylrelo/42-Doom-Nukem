/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   cplx_remove.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: slopez <slopez@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/23 10:26:51 by slopez       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/23 10:28:15 by slopez      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libft.h"

t_cplx	cplx_remove(t_cplx a, t_cplx b)
{
	t_cplx r;

	r.rl = a.rl - b.rl;
	r.im = a.im - b.im;
	return (r);
}
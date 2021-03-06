/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   cplx_sin.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: slopez <slopez@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/23 10:26:51 by slopez       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/23 10:28:19 by slopez      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libft.h"

t_cplx	cplx_sin(t_cplx z)
{
	t_cplx r;

	r.rl = sin(z.rl) * (exp(z.im) + exp(-z.im)) / 2;
	r.im = cos(z.rl) * (exp(z.im) - exp(-z.im)) / 2;
	return (r);
}

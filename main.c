/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoulee <kyoulee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:57:46 by kyoulee           #+#    #+#             */
/*   Updated: 2022/07/11 11:57:48 by kyoulee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <math.h>
#include <libft_math.h>

#include "src_constant/ft_constant_e.c"
#include "src_constant/ft_constant_golden_ratio.c"
#include "src_constant/ft_constant_pi.c"
#include "src_constant/ft_constant_square_root.c"

#include "src_trigonometric_functions/ft_sin.c"
#include "src_trigonometric_functions/ft_cos.c"
#include "src_trigonometric_functions/ft_tan.c"

#include "src_algebra/ft_cycle.c"

#include "src_algebra/src_abstract_algebra/ft_abs.c"
#include "src_algebra/src_order_theory/ft_max.c"
#include "src_algebra/src_order_theory/ft_min.c"

int	main(void)
{
	float	n;

	n = 0;
	while (n < C_PI / 2)
	{
		printf("%+f\t%+.20f\t%+.20f\t%+.20f \n", n, \
			ft_tan(n), tan(n), ft_tan(n) - tan(n));
		n += 0.01;
	}
}

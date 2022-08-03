/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_math.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoulee <kyoulee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:57:46 by kyoulee           #+#    #+#             */
/*   Updated: 2022/07/11 11:57:48 by kyoulee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_MATH_H
# define LIBFT_MATH_H

# define C_PI				3.14159265358979323846264338327950288
# define C_E				2.71828182845904523536028747135266249
# define C_SQUARE_ROOT_2	1.41421356237309504880168872420969807
# define C_SQUARE_ROOT_3	1.73205080756887729352744634150587236
# define C_SQUARE_ROOT_5	2.23606797749978969640917366873127623
# define C_GOLDEN_RATIO		1.61803398874989484820458683436563811

//## src_constant ##//
double	ft_constant_e(int repeat);
double	ft_constant_golden_ratio(int repeat);
double	ft_constant_pi(int repeat);
double	ft_constant_square_root(int integer, int repeat);

//## src_algebra ##//
double	ft_cycle(double value, double cycle);

//# src_abstract_algebra #//
double	ft_abs(double value);

//# src_order_theory #//
double	ft_max(double value1, double value2);
double	ft_min(double value1, double value2);

//## src_trigonometric_functions ##//
double	ft_sin(double angle);
double	ft_sin_plus(double angle1, double angle2);
double	ft_sin_minus(double angle1, double angle2);
double	ft_cosec(double angle);
double	ft_cos(double angle);
double	ft_cos_plus(double angle1, double angle2);
double	ft_cos_minus(double angle1, double angle2);
double	ft_sec(double angle);
double	ft_tan(double angle);
double	ft_tan_plus(double angle1, double angle2);
double	ft_tan_minus(double angle1, double angle2);
double	ft_cot(double angle);
#endif

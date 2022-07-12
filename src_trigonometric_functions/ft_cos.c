/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cos.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoulee <kyoulee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 20:04:06 by kyoulee           #+#    #+#             */
/*   Updated: 2022/07/11 20:04:09 by kyoulee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*
	cos함수 반복을 많이하면 더 정확하며 0과 멀어질 수록 값의 오차가 생긴다.
	반복 횟수를 7이상 하는 것을 추천드린다
	공식 :: https://en.wikipedia.org/wiki/Trigonometric_functions
*/
/* ************************************************************************** */

#include <libft_math.h>

double	ft_cos(double angle)
{
	double	cos;
	double	temp;
	double	p;
	int		num;
	int		repeat;

	cos = 0;
	p = 1;
	num = 1;
	angle = ft_cycle(angle, C_PI);
	temp = 1;
	repeat = ft_max(7, ft_abs(angle * 8));
	while (num < repeat)
	{
		p *= -1;
		cos += temp * p;
		temp = (temp * angle * angle) / ((4 * num * num) - 2 * num);
		num++;
	}
	return (-cos);
}

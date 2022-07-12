/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sin.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoulee <kyoulee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 20:04:06 by kyoulee           #+#    #+#             */
/*   Updated: 2022/07/12 16:30:17 by kyoulee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/* 
    sin함수 반복을 많이하면 더 정확하며 0과 멀어질 수록 값의 오차가 생긴다.
    반복 횟수를 7이상 하는 것을 추천드린다
	공식 :: https://en.wikipedia.org/wiki/Trigonometric_functions
*/
/* ************************************************************************** */

#include <libft_math.h>

double	ft_sin(double angle)
{
	double	sin;
	double	temp;
	double	p;
	int		num;
	int		repeat;

	sin = 0;
	p = -1;
	num = 1;
	angle = ft_cycle(angle, C_PI);
	temp = angle;
	repeat = ft_max(7, ft_abs(angle * 7));
	while (num < repeat)
	{
		p *= -1;
		sin += temp * p;
		temp = (temp * angle * angle) / ((4 * num * num) + 2 * num);
		num++;
	}
	return (sin);
}

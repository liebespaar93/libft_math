/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cycle.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoulee <kyoulee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 14:01:58 by kyoulee           #+#    #+#             */
/*   Updated: 2022/07/12 14:02:01 by kyoulee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/* 
	반복되는 주기에 따라 0을 기준으로 나눠주는 함수이다.
*/
/* ************************************************************************** */

#include <libft_math.h>

double	ft_cycle(double value, double cycle)
{
	double	abs_cycle;

	abs_cycle = ft_abs(cycle);
	while (value < -abs_cycle)
		value += abs_cycle * 2;
	while (value > abs_cycle)
		value -= abs_cycle * 2;
	return (value);
}
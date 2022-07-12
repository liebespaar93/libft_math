/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_constant_golden_ratio.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoulee <kyoulee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 19:43:27 by kyoulee           #+#    #+#             */
/*   Updated: 2022/07/11 19:43:28 by kyoulee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/* 
	황금비 만드는 함수 약 20번 이상을 돌리는 것을 추천한다.
	반복 횟수는 홀수로 하여 높은 수를 얻으는 것을 추천한다.
	#define C_GOLDEN_RATIO 1.61803398874989484820458683436563811
	공식 :: https://en.wikipedia.org/wiki/Golden_ratio
*/
/* ************************************************************************** */

double	ft_constant_golden_ratio(int repeat)
{
	double	golden_ratio;
	int		num;

	golden_ratio = 2;
	num = 0;
	while (num < repeat)
	{
		golden_ratio = 1 + (1 / golden_ratio);
		num++;
	}
	return (golden_ratio);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoulee <kyoulee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:57:06 by kyoulee           #+#    #+#             */
/*   Updated: 2022/07/12 12:57:08 by kyoulee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double	ft_abs(double value)
{
	if (value < 0)
		value *= -1;
	return (value);
}

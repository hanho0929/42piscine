/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cheho <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 10:21:56 by cheho             #+#    #+#             */
/*   Updated: 2018/08/25 12:33:13 by cheho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int ans;
	int i;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = 1;
	ans = nb;
	while (i++ < power)
		ans *= nb;
	return (ans);
}

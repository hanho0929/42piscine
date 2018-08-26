/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cheho <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 11:49:53 by cheho             #+#    #+#             */
/*   Updated: 2018/08/25 12:18:39 by cheho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb)
{
	int ans;

	ans = 1;
	if (nb == 0)
		return (2);
	while (nb++)
	{
		ans = 1;
		while (ans++ < nb)
			if (nb % ans == 0)
				break ;
		if (ans == nb)
			break ;
	}
	return (ans);
}

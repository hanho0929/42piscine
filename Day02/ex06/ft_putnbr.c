/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cheho <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 14:44:56 by cheho             #+#    #+#             */
/*   Updated: 2018/08/23 18:17:54 by cheho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print(int num)
{
	ft_putchar(num + '0');
}

int		ft_pow(int i)
{
	int target;

	target = 1;
	while (i > 0)
	{
		target *= 10;
		i--;
	}
	return (target);
}

void	ft_putnbr(int nb)
{
	int temp;
	int count;
	int cur;

	count = 0;
	cur = 0;
	if (nb < 0)
	{
		nb = -nb;
	}
	temp = nb;
	while (temp >= 10)
	{
		temp /= 10;
		count++;
	}
	while (count > 0)
	{
		cur = nb / ft_pow(count);
		ft_putchar(cur + '0');
		nb = nb - cur * ft_pow(count);
		count--;
	}
	ft_putchar(nb + '0');
}

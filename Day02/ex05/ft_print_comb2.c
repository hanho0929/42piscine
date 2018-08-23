/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cheho <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 11:49:09 by cheho             #+#    #+#             */
/*   Updated: 2018/08/23 14:44:17 by cheho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print(int n)
{
	if (n < 10)
	{
		ft_putchar('0');
		ft_putchar(n + '0');
	}
	else
	{
		ft_putchar((n / 10) + '0');
		ft_putchar((n % 10) + '0');
	}
}

void	ft_print_comma(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb2(void)
{
	int f;
	int s;

	f = 0;
	s = 1;
	while (f < 99)
	{
		ft_print(f);
		ft_putchar(' ');
		ft_print(s);
		if (f != 98)
			ft_print_comma();
		if (s > 98)
		{
			f++;
			s = f + 1;
		}
		else
		{
			s++;
		}
	}
}

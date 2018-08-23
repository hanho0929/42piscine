/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cheho <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 21:39:14 by cheho             #+#    #+#             */
/*   Updated: 2018/08/23 14:30:50 by cheho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_commas(int f, int s, int t)
{
	if (!(f == 7 && s == 8 && t == 9))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int f;
	int s;
	int t;

	f = 0;
	while (f <= 7)
	{
		s = f + 1;
		while (s <= 8)
		{
			t = s + 1;
			while (t <= 9)
			{
				ft_putchar(f + '0');
				ft_putchar(s + '0');
				ft_putchar(t + '0');
				ft_print_commas(f, s, t);
				t++;
			}
			s++;
		}
		f++;
	}
}

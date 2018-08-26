/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cheho <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 09:37:53 by cheho             #+#    #+#             */
/*   Updated: 2018/08/25 14:29:44 by cheho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	condition_print(int width, int length, int x, int y)
{
	if (length == 0 || length == y - 1)
	{
		if (width == 0 || width == x - 1)
			ft_putchar('o');
		else
			ft_putchar('-');
	}
	else
	{
		if (width == 0 || width == x - 1)
			ft_putchar('|');
		else
			ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int width;
	int length;

	width = -1;
	length = -1;
	while (length++ < y - 1)
	{
		width = -1;
		while (width++ < x - 1)
			condition_print(width, length, x, y);
		ft_putchar('\n');
	}
}

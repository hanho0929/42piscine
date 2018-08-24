/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cheho <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 15:25:53 by cheho             #+#    #+#             */
/*   Updated: 2018/08/23 20:14:07 by cheho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_find(int *arr, int col, int n)
{
	int i;

	while (col)
	{
		while (arr[col] == (9 + col - (n - 1)) && col >= 0)
			col -= 1;
		if (col < 0)
			break ;
		arr[col] += 1;
		i = col;
		while (i++ < n)
		{
			arr[i] = arr[i - 1] + 1;
		}
		col = n - 1;
		ft_putchar(',');
		ft_putchar(' ');
		i = 0;
		while (i < n)
			ft_putchar(arr[i++] + '0');
	}
}

void	ft_print_combn(int n)
{
	int arr[n];
	int i;
	int col;

	col = n - 1;
	if (n > 10)
		return ;
	i = 0;
	while (i < n)
	{
		arr[i] = i;
		i++;
	}
	i = 0;
	while (i < n)
	{
		ft_putchar(arr[i] + '0');
		i++;
	}
	ft_find(arr, col, n);
}

int		main(void)
{
	ft_print_combn(3);
	return (0);
}

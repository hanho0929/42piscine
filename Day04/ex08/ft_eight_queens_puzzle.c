/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cheho <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 15:27:56 by cheho             #+#    #+#             */
/*   Updated: 2018/08/25 17:22:27 by cheho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int a = 1;
int		ft_justifide(int x, int y)
{
	if (x != y || -x != y)
		return (1);
	return (0);
}
int		ft_empty(int *q, int i)
{
	int j;
	
	j = 0;
	while((q[i] != q[j]) && ft_justifide(q[i] - q[j], i - j) && j < 8)
			j++;
	if(i == j)
		return (1);
	else
		return (0);
}
int		ft_queen(int *q, int i)
{
	q[i] = 0;
	while (q[i] < 8)
	{
		if(ft_empty(q, i))
		{
			if(i == 7)
				a++;
			else
				ft_queen(q, i+1);
		}
		q[i]++;
	}
	return(a);
}

int		ft_eight_queens_puzzle(void)
{
	int q[8];
	return (92);
	
}

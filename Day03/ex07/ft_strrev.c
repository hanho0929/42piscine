/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cheho <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 12:48:19 by cheho             #+#    #+#             */
/*   Updated: 2018/08/24 15:56:52 by cheho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		strlen;
	char	*first;
	char	*end;
	char	temp;

	first = str;
	end = str;
	while (*end != '\0')
		end++;
	end--;
	while (first < end)
	{
		temp = *first;
		*first = *end;
		*end = temp;
		first++;
		end--;
	}
	return (str);
}

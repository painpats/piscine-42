/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 16:24:09 by cbourre           #+#    #+#             */
/*   Updated: 2022/02/28 18:50:17 by cbourre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	a;
	int	b;
	int	c;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32)
		{
			write(1, "\\", 1);
			a = "0123456789abcdef"[str[i] / 16];
			b = "0123456789abcdef"[str[i] % 16];
			write(1, &a, 1);
			write(1, &b, 1);
		}
		else
		{
			c = str[i];
			write(1, &c, 1);
		}
		i++;
	}
}

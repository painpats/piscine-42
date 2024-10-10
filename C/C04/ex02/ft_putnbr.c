/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 10:30:39 by cbourre           #+#    #+#             */
/*   Updated: 2022/03/04 19:08:30 by cbourre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_nb_neg_putm(int nb_neg)
{
	if (nb_neg == 0)
		write(1, "-", 1);
}

void	ft_annexe(int nb)
{
	int		i;
	int		nb_neg;
	char	nb_char[12];

	i = 0;
	nb_neg = 1;
	if (nb < 0)
	{
		nb_neg = 0;
		nb = -nb;
	}
	else if (nb == 0)
		write(1, "0", 1);
	while (nb > 0)
	{
		nb_char[i] = ((nb % 10) + '0');
		nb = nb / 10;
		i++;
	}
	ft_nb_neg_putm(nb_neg);
	while (--i >= 0)
		write(1, &nb_char[i], 1);
}

void	ft_putnbr(int nb)
{
	if (nb > -2147483648)
	{
		ft_annexe(nb);
	}
	else if (nb == -2147483648)
		write(1, "-2147483648", 11);
}

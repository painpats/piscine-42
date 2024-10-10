/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rledoux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 13:04:27 by rledoux           #+#    #+#             */
/*   Updated: 2022/02/19 13:40:24 by rledoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_top(int x)
{
	int	b;

	b = 1;
	while (b <= x)
	{
		if (b == 1 || b == x)
			ft_putchar('A');
		else
			ft_putchar('B');
		b++;
	}
	ft_putchar('\n');
}

void	ft_print_bot(int x)
{
	int	b;

	b = 1;
	while (b <= x)
	{
		if (b == 1 || b == x)
			ft_putchar('C');
		else
			ft_putchar('B');
		++b;
	}
	ft_putchar('\n');
}

void	ft_print_mid(int x)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1 || i == x)
			ft_putchar('B');
		else
			ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
}

int	checkerror(int x, int y)
{
	char	*err;
	int		i;

	err = "Doucement Doc... Des chiffres entre 1 et 2 147 483 647,please ;)\n";
	i = 0;
	if (x <= 0 || y <= 0)
	{
		while (err[i])
		{
			ft_putchar(err[i]);
			i++;
		}
		return (1);
	}
	else
		return (0);
}

int	rush(int x, int y)
{
	int	r;

	r = 1;
	if (checkerror(x, y) == 1)
		return (1);
	else
	{
		while (r <= y)
		{
			if (r == 1)
				ft_print_top(x);
			else if (r == y)
				ft_print_bot(x);
			else
				ft_print_mid(x);
			++r;
		}
		return (0);
	}
}

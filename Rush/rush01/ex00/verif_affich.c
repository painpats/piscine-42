/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif_affich.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbihan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 16:17:53 by mbihan            #+#    #+#             */
/*   Updated: 2022/02/27 11:20:32 by mbihan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_error(void)
{	
	write(1, "Error\n", 6);
	return (1);
}

//transforme char donné en tableau de int
int	ft_char_to_int(char *tab_char, int *tab)
{
	int	i;
	int	j;
	int	error;

	error = 0;
	i = 0;
	j = 0;
	while ((i < 32) && (error == 0))
	{
		if ((tab_char[i] >= '1') && (tab_char[i] <= '4'))
		{
			tab[j] = tab_char[i] - '0';
			j++;
		}
		else
			error = 1;
		i++;
		if ((tab_char[i] != ' ') && (tab_char[i] != '\0'))
			error = 1;
		i++;
	}
	return (error);
}

//verifie que les regles sont respectées
int	ft_check_error(int *tab)
{
	int	cmpt;
	int	error;

	error = 0;
	cmpt = 0;
	while ((cmpt < 12) && (error == 0))
	{
		if ((tab[0 + cmpt] == 4) && (tab[4 + cmpt] != 1))
			error = 1;
		if ((tab[0 + cmpt] == 3) && ((tab[4 + cmpt] != 2)))
			if (tab[4 + cmpt] != 1)
				error = 1;
		if ((tab[0 + cmpt] == 2) && (tab[4 + cmpt] == 4))
			error = 1;
		if ((tab[0 + cmpt] == 1) && (tab[4 + cmpt] != 2 && tab[4 + cmpt] != 4))
			error = 1;
		cmpt++;
		if (cmpt == 4)
			cmpt += 4;
	}
	return (error);
}

//affiche tableau
void	ft_affichage(int grille[4][4])
{
	int	l;
	int	c;

	l = 0;
	c = 0;
	while (l < 4)
	{
		c = 0;
		while (c < 4)
		{
			ft_putchar(grille[l][c] + 48);
			ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		l++;
	}
}

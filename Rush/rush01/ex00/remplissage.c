/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remplissage.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 09:30:45 by cbourre           #+#    #+#             */
/*   Updated: 2022/02/27 11:00:06 by mbihan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// si 4 : 1 2 3 4
void	ft_remplissage_quatre_part1(int grille[4][4], int *tab)
{
	int	cmpt;

	cmpt = 0;
	while (cmpt < 4)
	{
		if (tab[0 + cmpt] == 4)
		{
			grille[0][0 + cmpt] = 1;
			grille[1][0 + cmpt] = 2;
			grille[2][0 + cmpt] = 3;
			grille[3][0 + cmpt] = 4;
		}
		if (tab[4 + cmpt] == 4)
		{
			grille[0][0 + cmpt] = 4;
			grille[1][0 + cmpt] = 3;
			grille[2][0 + cmpt] = 2;
			grille[3][0 + cmpt] = 1;
		}
		cmpt++;
	}
}

void	ft_remplissage_quatre_part2(int grille[4][4], int *tab)
{
	int	cmpt;

	cmpt = 0;
	while (cmpt < 4)
	{
		if (tab[8 + cmpt] == 4)
		{
			grille[0 + cmpt][0] = 1;
			grille[0 + cmpt][1] = 2;
			grille[0 + cmpt][2] = 3;
			grille[0 + cmpt][3] = 4;
		}
		if (tab[12 + cmpt] == 4)
		{
			grille[0 + cmpt][0] = 4;
			grille[0 + cmpt][1] = 3;
			grille[0 + cmpt][2] = 2;
			grille[0 + cmpt][3] = 1;
		}
		cmpt++;
	}
}

// si 1 : 4
void	ft_remplissage_un(int grille[4][4], int *tab)
{
	int	cmpt;

	cmpt = 0;
	while (cmpt < 4)
	{
		if (tab[0 + cmpt] == 1)
			grille[0][0 + cmpt] = 4;
		if (tab[4 + cmpt] == 1)
			grille[3][0 + cmpt] = 4;
		if (tab[8 + cmpt] == 1)
			grille[0 + cmpt][0] = 4;
		if (tab[12 + cmpt] == 1)
			grille[0 + cmpt][3] = 4;
		cmpt++;
	}
}

// si 1 et 2 en face : 3 en face du 2
void	ft_remplissage_un_deux(int grille[4][4], int *tab)
{
	int	cmpt;

	cmpt = 0;
	while (cmpt < 4)
	{
		if (tab[0 + cmpt] == 1 && tab[4 + cmpt] == 2)
			grille[3][0 + cmpt] = 3;
		if (tab[4 + cmpt] == 1 && tab[0 + cmpt] == 2)
			grille[3][0 + cmpt] = 3;
		if (tab[8 + cmpt] == 1 && tab[12 + cmpt] == 2)
			grille[0 + cmpt][3] = 3;
		if (tab[12 + cmpt] == 1 && tab[8 + cmpt] == 2)
			grille[0 + cmpt][3] = 3;
		cmpt++;
	}
}

//si 2 | 3 4 - - | 2  alors 2 | 3 4 1 2 | 2 ; 
void	ft_remplissage_deux_part1(int grille[4][4], int *tab)
{
	int	cmpt;

	cmpt = 0;
	while (cmpt < 4)
	{
		if (tab[0 + cmpt] == 2 && tab[4 + cmpt] == 2)
		{
			if (grille[0][0 + cmpt] == 3 && grille[1][0 + cmpt] == 4)
			{
				grille[2][0 + cmpt] = 1;
				grille[3][0 + cmpt] = 2;
			}
		}
		if (tab[4 + cmpt] == 2 && tab[0 + cmpt] == 2)
		{
			if (grille[3][0 + cmpt] == 3 && grille[2][0 + cmpt] == 4)
			{
				grille[0][0 + cmpt] = 2;
				grille[1][0 + cmpt] = 1;
			}
		}
		cmpt++;
	}
}

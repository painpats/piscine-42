/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_appel_remplissage.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbihan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 10:51:42 by mbihan            #+#    #+#             */
/*   Updated: 2022/02/27 11:33:45 by mbihan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_remplissage_deux_part2(int grille[4][4], int *tab);
void	ft_remplissage_quatre_part1(int grille[4][4], int *tab);
void	ft_remplissage_quatre_part2(int grille[4][4], int *tab);
void	ft_remplissage_un(int grille[4][4], int *tab);
void	ft_remplissage_un_deux(int grille[4][4], int *tab);
void	ft_remplissage_deux_part1(int grille[4][4], int *tab);

void	ft_appel_remplissage(int grille[4][4], int *tab)
{
	ft_remplissage_quatre_part1(grille, tab);
	ft_remplissage_quatre_part2(grille, tab);
	ft_remplissage_un(grille, tab);
	ft_remplissage_un_deux(grille, tab);
	ft_remplissage_deux_part1(grille, tab);
	ft_remplissage_deux_part2(grille, tab);
}

void	ft_remplissage_deux_part2(int grille[4][4], int *tab)
{
	int	cmpt;

	cmpt = 0;
	while (cmpt < 4)
	{
		if (tab[8 + cmpt] == 2 && tab[12 + cmpt] == 2)
		{
			if (grille[0 + cmpt][0] == 3 && grille[0 + cmpt][1] == 4)
			{
				grille[0 + cmpt][2] = 1;
				grille[0 + cmpt][3] = 2;
			}
		}
		if (tab[12 + cmpt] == 2 && tab[8 + cmpt] == 2)
		{
			if (grille[0 + cmpt][3] == 3 && grille[0 + cmpt][2] == 4)
			{
				grille[0 + cmpt][1] = 1;
				grille[0 + cmpt][0] = 2;
			}
		}
		cmpt ++;
	}
}

int	ft_taille_char(char *tab)
{
	int	i;
	int	error;

	error = 0;
	i = 0;
	while (tab[i] != '\0')
		i++;
	if (i != 31)
		error = 1;
	return (error);
}

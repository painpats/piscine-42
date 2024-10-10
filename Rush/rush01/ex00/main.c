/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbihan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 16:13:03 by mbihan            #+#    #+#             */
/*   Updated: 2022/02/27 11:34:03 by mbihan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_affichage(int grille[4][4]);
int		ft_check_error(int *tab);
int		ft_error(void);
int		ft_char_to_int(char *tab_char, int *tab);
void	ft_putchar(char c);
void	ft_appel_remplissage(int grille[4][4], int *tab);
int		ft_taille_char(char *tab);

void	ft_tab_de_zero(int grille[4][4])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			grille[i][j] = 0;
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	error;
	int	grille[4][4];
	int	tab[16];

	error = 0;
	if (argc != 2)
		return (1);
	error += ft_taille_char(argv[1]);
	error += ft_char_to_int(argv[1], tab);
	error += ft_check_error(tab);
	if (error != 0)
	{
		ft_error();
		return (0);
	}
	ft_tab_de_zero(grille);
	ft_appel_remplissage(grille, tab);
	ft_affichage(grille);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 09:20:48 by cbourre           #+#    #+#             */
/*   Updated: 2022/03/03 15:52:19 by cbourre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	if (to_find[0] == 0)
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			k = i;
			while (str[k] == to_find[j] && to_find[j] != '\0')
			{
				k++;
				j++;
			}
			if (to_find[j] == '\0')
				return (&str[i]);
			j = 0;
		}
		i++;
	}
	return (0);
}

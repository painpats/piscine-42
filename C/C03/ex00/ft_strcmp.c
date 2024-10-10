/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 17:18:13 by cbourre           #+#    #+#             */
/*   Updated: 2022/02/28 11:14:26 by cbourre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] - s2[i] < 0 || s1[i] - s2[i] > 0)
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
#include <stdio.h>
#include <string.h>
int main()
{
	char s1[100] = "je suis la";
	char s2[100] = "je suis lA";
	
	printf("%d\n", ft_strcmp(s1, s2));
	printf("%d", strcmp(s1, s2));
	return (0);
	
}

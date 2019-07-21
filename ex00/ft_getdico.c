/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_getdico.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fmoenne- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/21 09:45:31 by fmoenne-     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/21 23:36:27 by fmoenne-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "ourlib.h"

char	**ft_getdico(char *str)
{
	int		i;
	int		a;
	char	*dest;
	int		j;
	char	**strs_tab;
	int		prev;

	prev = 0;
	dest = (char*)malloc(sizeof(char) * 10000);
	strs_tab = (char**)malloc(sizeof(char*) * 1000);
	i = 0;
	j = 0;
	a = 0;
	while (str[i])
	{
		while (str[i] > ' ' && str[i] <= '~' && str[i] != ':')
		{
			dest[j] = str[i];
			j++;
			i++;
		}
		if (str[i] == '\n')
		{
			strs_tab[a] = dest + prev;
			i++;
			a++;
		}
		i++;
		prev = j + 1;
		j++;
	}
	i = -1;
	return (strs_tab);
}

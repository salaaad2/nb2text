/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_getdico.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fmoenne- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/21 09:45:31 by fmoenne-     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/21 11:55:38 by fmoenne-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

char	*empty_str(char *str)
{
	int x;

	x = 0;
	while (str[x])
	{
		str[x] = '\0';
		x++;
	}
	return (str);
}

char    **ft_getdico(char *str)
{
	int i;
	int a;
	char *dest;
	int j;
	char	**strs_tab;

	dest = (char*)malloc(sizeof(char) * 10000);
	strs_tab = (char**)malloc(sizeof(char*) * 1000);
	i = 0;
	j = 0;
	a = 0;
	while (str[i])
	{
		while (str[i] >= 'a' && str[i] <= 'z')
		{
			dest[j] = str[i];
			j++;
			i++;
		}
		if (str[i] == '\n')
		{
			strs_tab[a] = dest;
			printf("%s\n", strs_tab[a]);
			i++;
			a++;
			empty_str(dest);
		}
		i++;
		j = 0;
	}
	return (strs_tab);
}

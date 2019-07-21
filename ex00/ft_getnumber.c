/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_getnumber.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fmoenne- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/20 18:49:55 by fmoenne-     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/21 13:45:11 by fmoenne-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int     ft_atoi(char *str);


int		*ft_getnumber(char *str)
{
	int		i;
	char	*dest;
	int		j;
	int		*int_tab;
	int		a;

	int_tab = malloc(sizeof(int) * 4096);
	dest = malloc(sizeof(char) * 4096);
	a = 0;
	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] == ' ' || (str[i] < '0' && str[i] > '9'))
			i++;
		while (str[i] >= '0' && str[i] <= '9')
		{
			dest[a] = str[i];
			a++;
			i++;
		}
		while (str[i] == ' ' || (str[i] < '0' && str[i] > '9'))
			i++;
		if (str[i] == ':')
		{
			printf("dest : %s\n", dest);
			int_tab[j] = ft_atoi(dest);
			printf("tab : %d\n", int_tab[2]);
			j++;
		}
		dest[0] = '\0';
		a = 0;
		i++;
	}
	return (int_tab);
}

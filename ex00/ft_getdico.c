/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_getdico.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fmoenne- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/21 09:45:31 by fmoenne-     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/21 17:55:51 by fmoenne-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "ourlib.h"

struct b
{
	char **arr;
};

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

struct b	ft_getdico(char *str)
{
	int i;
	int a;
	char *dest;
	int j;
	struct b c;

	i = 0;
	dest = (char*)malloc(sizeof(char) * 10000);
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
			c.arr[a] = dest;
			i++;
			a++;
			empty_str(dest);
		}
		printf("%s\n", c.arr[a]);
		i++;
		j = 0;
	}
	return (c);
}

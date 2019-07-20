/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fmoenne- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/20 11:54:42 by fmoenne-     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/20 19:00:57 by fmoenne-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

char	*ft_parse(int nb)
{
	int		i;
	int		f;
	int		car;
	int		line;
	char	*c;

	line = nb + 1;
	i = 0;
	c = (char*)malloc(sizeof(char) * 4096);
	f = open("numbers.dict", O_RDONLY);
	if (f < 0)
	{
		return (0);
	}
	car = read(f, c, 4096);
	while (c[i] && line != 0)
	{
		if (c[i] == '\n')
			line--;
		i++;
	}
	printf("%s\n", c);
	c[i] = '\0';
	return (c);
}

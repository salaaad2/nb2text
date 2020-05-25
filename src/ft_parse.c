/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_parse.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fmoenne- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/20 11:54:42 by fmoenne-     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/21 11:30:51 by fmoenne-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../inc/ourlib.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

const char
*ft_parse(void)
{
	int		i;
	int		fd;
	int		car;
	char	*c;

	i = 0;
	c = (char*)malloc(sizeof(char) * 4096);
	if ((fd = open(DICT, O_RDONLY)) < 0)
		return (0);
	if ((car = read(fd, c, 4096)) < 0)
		return (0);
	while (c[i])
		i++;
	c[i] = '\0';
	return (c);
}

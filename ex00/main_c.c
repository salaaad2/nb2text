/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main_c.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fmoenne- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/21 15:28:58 by fmoenne-     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/21 18:12:20 by fmoenne-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ourlib.h"

int        main(int ac, char **av)
{
	char **t2;
	int i = 0;
	if (ac > 3 || ac < 2)
		return (0);
	else if (ac == 2)
	{
		if (ft_check_arg(av[1]))
			return (0);
		t2 = ft_getdico(ft_parse());
		//ft_putnbr(ft_getnumber(ft_parse()), ft_getdico(ft_parse()), ft_atoi(av[1]));
	}
	else
	{
		if (ft_check_arg(av[2]))
			return (0);
		ft_parse();
	}
	return (0);
}

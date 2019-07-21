/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main_c.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fmoenne- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/21 15:28:58 by fmoenne-     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/21 15:45:06 by fmoenne-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ourlib.h"

int        main(int ac, char **av)
{
	if (ac > 3 || ac < 2)
		return (0);
	else if (ac == 2)
	{
		if (ft_check_arg(av[1]))
			return (0);
		ft_putnbr(ft_getnumber(ft_parse()), ft_getdico(ft_parse()), 42);
	}
	else
	{
		if (ft_check_arg(av[2]))
			return (0);
		ft_parse();
	}
	return (0);
}

/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main_c.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fmoenne- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/21 15:28:58 by fmoenne-     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/21 23:34:24 by fmoenne-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../inc/ourlib.h"

int		main(int ac, char **av)
{
	const char *fulltxt;

	if (ac > 3 || ac < 2)
		return (0);
	else if (ac == 2)
	{
		fulltxt = ft_parse();
		if (ft_check_arg(av[1]))
			return (0);
		ft_putnbr(ft_getnumber(fulltxt), ft_getdico(fulltxt), ft_atoi(av[1]), 0);
	}
	else
	{
		if (ft_check_arg(av[2]))
			return (0);
		ft_parse();
	}
	return (0);
}

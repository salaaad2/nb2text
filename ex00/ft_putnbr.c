/* ************************************************************************** */

/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fmoenne- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/21 15:26:35 by fmoenne-     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/21 16:31:38 by fmoenne-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_print(int *tab, char **str, int nbr)
{
	int i;

	i = 0;
	//	write(1, "print", 12);
	while (nbr != tab[i])
		i++;
	ft_putstr(str[i]);
}


int		ft_putnbr(int *tab, char **str, int nbr)
{
	float nb;
	ft_putstr(str[0]);
	int i;
	i = 0;
	nb = nbr;
	while (nbr > tab[i])
		i++;
	if (tab[i] >= 100)
	{
		write(1, "1\n", 12);
		ft_print(tab, str, nbr / tab[i - 1]);
		write(1, "2\n", 12);
		ft_print(tab, str, tab[i - 1]);
	}
	else
	{
		ft_print(tab, str, tab[i - 1]);
	}
	if (nbr == 0 || nbr % tab[i - 1] == 0)
		return (0);
	else
		ft_putnbr(tab, str, nbr % tab[i - 1]);
	return (0);
}

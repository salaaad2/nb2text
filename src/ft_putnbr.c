/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fmoenne- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/21 15:26:35 by fmoenne-     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/21 23:39:56 by fmoenne-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

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
	while (nbr != tab[i])
		i++;
	ft_putstr(str[i]);
}

/* tab -> ints with the same index as :
** str -> array of words
** nbr -> numerical int
** rec -> utility variable to signal that the function needs
** to be called again
 */
int		ft_putnbr(int *tab, char **str, int nbr, int rec)
{
	int i;

	i = 0;
	while (nbr > tab[i])
		i++;
	if (nbr == tab[i])
	{
		if (nbr >= 100)
		{
			ft_print(tab, str, nbr / tab[i - 1]);
			ft_putstr(" ");
		}
		ft_print(tab, str, tab[i]);
		return (0);
	}
	else if (tab[i] >= 100)
	{
		ft_print(tab, str, nbr / tab[i - 1]);
		ft_putstr(" ");
		ft_print(tab, str, tab[i - 1]);
		ft_putstr(" ");
	}
	else if (tab[i] <= 20 && tab[i] != 0)
	{
		ft_print(tab, str, tab[i]);
	}
	else
	{
		if (rec != 0)
			ft_putstr("and ");
		ft_print(tab, str, tab[i - 1]);
		ft_putstr("-");
	}
	if (nbr % tab[i - 1] == 0)
		return (0);
	else
	{
		rec = rec + 1;
		ft_putnbr(tab, str, nbr % tab[i - 1], rec);
	}
	ft_putstr("\n");
	return (0);
}

/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fmoenne- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/21 15:26:35 by fmoenne-     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/21 16:00:24 by fmoenne-    ###    #+. /#+    ###.fr     */
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


int		ft_putnbr(int *tab, char **str, int nbr)
{
	int i;

	i = 0;
	while (nbr < tab[i])
		i++;
	if (tab[i] >= 100)
	{
		ft_print(tab, str, nbr / tab[i]);
		ft_print(tab, str, tab[i]);
	}
	else
	{
		ft_print(tab, str, tab[i]);
	}
	if (nbr == 0 || nbr % tab[i] == 0)
		return (0);
	else
		ft_putnbr(tab, str, nbr % tab[i]);
	return (0);
}

int main(void)
{
	int t1[100];
	char **t2;

	t2 = (char**)malloc(sizeof(char*) * 1000);

	t1[0] = 2;
	t1[1] = 1;
	t1[2] = 0;
	t2[0] = "deux";
	t2[1] = "un";
	t2[2] = "zero";

	int nbr = 0;
	ft_putnbr(t1, t2, nbr);
}

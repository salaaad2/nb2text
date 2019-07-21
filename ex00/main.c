/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fmoenne- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/20 14:54:08 by fmoenne-     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/21 11:27:29 by fmoenne-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_getnumber(char *str);
char	*ft_parse(void);
int		ft_atoi(char *str);
char	**ft_getdico(char *str);


int		main(int ac, char **av)
{
	char *tmp;
	char **test;

	test =(char**)malloc(sizeof(char*) * 100);
	tmp = (char*)malloc(sizeof(char) * 100000000);
	if (ac != 2)
		return (0);
	else
	{
		tmp = ft_parse();
		ft_getnumber(tmp);
		ft_getdico(tmp);
	}
}

/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_check_c.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fmoenne- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/21 15:36:05 by fmoenne-     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/21 22:57:11 by fmoenne-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int ft_check_arg(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' && str[i] > '9')
			return (1);
		i++;
	}
	return (0);
}

int ft_check_dico(char *dico)
{
	int i;
	i = 0;
	while (dico[i])
	{
		while (dico[i] == '\n')
			i++;
		if (dico[i] <= '0' && dico[i] >= '9' && dico[i] != '\0')
			return (0);
		while (dico[i] >= '0' && dico[i] <= '9')
			i++;
		if (dico[i] != ' ' && dico[i] != ':' && dico[i]  != '\0')
			return (0);
		while (dico[i] == ' ' || dico[i] == ':')
			i++;
		if (dico[i] < ' ' && dico[i] > '~' && dico[i] != '\0')
			return (0);
		if ((dico[i] < ' ' || dico[i] > '~') && dico[i] !='\0')
			return (0);
		while(dico[i] >= ' ' && dico[i] <= '~' && dico[i] != '\n')
			i++;
		if (dico[i] != '\n' && dico[i] != '\0')
			return (0);
	}
	return(1);
}

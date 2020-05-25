/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ourlib.h                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fmoenne- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/21 13:53:05 by fmoenne-     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/21 23:13:09 by fmoenne-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef _OURLIB_H
# define _OURLIB_H

#ifndef DICT
# define DICT "txt/numbers.dict"
#endif

int		ft_check_arg(char *str);
int		ft_atoi(char *str);
int		*ft_getnumber(const char *str);
int		ft_putnbr(int *tab, char **str, int nbr, int recursive);
char	    **ft_getdico(const char *str);
const char	*ft_parse(void);

#endif

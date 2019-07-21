/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ourlib.h                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fmoenne- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/21 13:53:05 by fmoenne-     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/21 17:52:09 by fmoenne-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef _OURLIB_H
# define _OURLIB_H
# define N 45

int		ft_check_arg(char *str);
int		ft_atoi(char *str);
int		*ft_getnumber(char *str);
struct b	ft_getdico(char *str);
char	*ft_parse(void);
int		ft_putnbr(int *tab, char **str, int nbr);

#endif

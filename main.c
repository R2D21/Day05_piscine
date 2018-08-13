/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboivin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 07:15:11 by rboivin           #+#    #+#             */
/*   Updated: 2018/08/13 15:52:27 by rboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

void		ft_putstr(char *str);
void		ft_putnbr(int nbr);		
int			ft_atoi(char *str);
char		*ft_strcpy(char *dest, char *str);
char		*ft_strncpy(char *dest, char *str, unsigned int n);
int			ft_strcmp(char *s1, char *s2);
int			ft_strncmp(char *s1, char *s2, unsigned int n);
char		*ft_strupcase(char *str);
char		*ft_strlowcase(char *str);
int			ft_str_is_numeric(char *str);
int			ft_str_is_lowercase(char *str);
int			ft_str_is_uppercase(char *str);
int			ft_str_is_printable(char *str);
char		*ft_strcat(char *dest, char *src);
char		*ft_strncat(char *dest, char *src, int nb);
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
unsigned int ft_strlcat(char *dest, char *src, unsigned int nb);


int			ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int			main()
{
	char	*dest;
	char	*dest1;
	char	str[148] = "Je suis une petite fille";
	char	str1[148] = "je suis un petit garcon";
	int		ft_str_is_alpha(char *str);

	dest = malloc(4096 * sizeof(char));
	dest1 = malloc(4096 * sizeof(char));
	printf("============================================================\n");
	printf("EX00\n");
	ft_putstr("Je suis une fonction de test\n");
	printf("============================================================\n");
	printf("EX01\n");
	ft_putnbr(INT_MAX);
	printf("\n============================================================\n");
	printf("EX02\n");
	printf("%i\n", ft_atoi("18996"));
	printf("\n============================================================\n");
	printf("EX03\n");
	dest = ft_strcpy(dest, "test\0");
	printf("%s", dest);
	printf("\n============================================================\n");
	printf("EX04\n");
	dest1 = ft_strncpy(dest1, "Je suis une phrase\0", 4);
	printf("%s", dest1);
	printf("\n============================================================\n");
	printf("EX06\n");
	printf("%i\n", ft_strcmp("test1","teast"));
	printf("============================================================\n");
	printf("EX07\n");
	printf("%i\n", ft_strncmp("test\0","t1est1\0", 2));
	printf("============================================================\n");
	printf("EX08\n");
	printf("%s\n", ft_strupcase(str));
	printf("============================================================\n");
	printf("EX09\n");
	printf("%s\n", ft_strlowcase(str1));
	printf("============================================================\n");
	printf("EX011\n");
	printf("%i\n", ft_str_is_alpha(str1));
	printf("============================================================\n");
	printf("EX012\n");
	printf("%i\n", ft_str_is_numeric("12345678"));
	printf("============================================================\n");
	printf("EX013\n");
	printf("%i\n", ft_str_is_lowercase("ABCDEF"));
	printf("============================================================\n");
	printf("EX014\n");
	printf("%i\n", ft_str_is_uppercase("SDSDASD4545dsad"));
	printf("============================================================\n");
	printf("EX015\n");
	printf("%i\n", ft_str_is_printable("ADFFF566565+65$#^&$%#&^$%"));
	printf("============================================================\n");
	printf("EX016\n");
	printf("%s\n", ft_strcat(str, str1));
	printf("============================================================\n");
	printf("EX017\n");
	printf("%s\n", ft_strncat(str, str1, 4));
	printf("============================================================\n");
	printf("EX018\n");
	printf("%i\n", ft_strlcat(str, str1, 4));
	printf("============================================================\n");
	printf("EX019\n");
	printf("%i\n", ft_strlcpy(dest, str1, 4));
	printf("============================================================\n");
	return (0);
}

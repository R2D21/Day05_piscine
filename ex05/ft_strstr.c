/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboivin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 11:24:54 by rboivin           #+#    #+#             */
/*   Updated: 2018/08/14 12:35:29 by rboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int			ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int			ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int		i;

	i = 0;
	while (i < n)
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s2[i] > s1[i])
			return (-1);
		i++;
	}
	return (s1[i] - s2[i]);
}

char		*ft_strstr(char *str, char *to_find)
{
	while (*str)
	{
		if (ft_strncmp(str, to_find, ft_strlen(to_find)) == 0)
			return (str);
		str++;
	}
	return (NULL);
}

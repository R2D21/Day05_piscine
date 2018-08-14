/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboivin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 14:36:40 by rboivin           #+#    #+#             */
/*   Updated: 2018/08/14 12:37:00 by rboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_strlen(char *str)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i])
		i++;
	return (i);
}

char		*ft_strncat(char *dest, char *src, int nb)
{
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(dest);
	while (i < nb && src[i] != '\0')
		dest[j++] = src[i++];
	dest[j] = '\0';
	return (dest);
}

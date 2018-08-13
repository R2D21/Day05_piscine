/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboivin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 10:35:41 by rboivin           #+#    #+#             */
/*   Updated: 2018/08/13 15:31:06 by rboivin          ###   ########.fr       */
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

char		*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(dest);
	while (src[i])
		dest[j++] = src[i++];
	dest[j] = '\0';
	return (dest);
}

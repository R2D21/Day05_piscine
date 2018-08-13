/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboivin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 15:44:54 by rboivin           #+#    #+#             */
/*   Updated: 2018/08/13 15:54:28 by rboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int dest_base_size;
	unsigned int i;
	unsigned int i_max;

	dest_base_size = ft_strlen(dest);
	i = 0;
	i_max = (size - 1) - dest_base_size;
	while (src[i] != '\0' && i < i_max)
	{
		dest[dest_base_size + i] = src[i];
		i++;
	}
	dest[dest_base_size + i] = '\0';
	return (dest_base_size + i);
}

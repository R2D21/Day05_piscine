/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboivin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 09:02:53 by rboivin           #+#    #+#             */
/*   Updated: 2018/08/11 09:03:27 by rboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] <= 32 || (str[i] >= 'a' && str[i] <= 'z'))
			i++;
		str[i] = str[i] + 32;
		i++;
	}
	return(str);
}
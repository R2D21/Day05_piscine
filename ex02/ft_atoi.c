/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboivin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 07:30:21 by rboivin           #+#    #+#             */
/*   Updated: 2018/08/11 07:31:19 by rboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_atoi(char *str)
{
	int		i;
	int		result;
	int		signe;

	i = 0;
	result = 0;
	signe = 1;
	while (str[i] <= 32)
		i++;
	if (str[i] == '-')
		signe = -signe;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		result = result * 10 + str[i++] - '0';
	return (result * signe);

}

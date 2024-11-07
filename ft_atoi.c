/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebansse <ebansse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:39:19 by ebansse           #+#    #+#             */
/*   Updated: 2024/11/05 17:39:28 by ebansse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	atoi(const char * str)
{
	int	sign;
	int	i;
	int	nb;

	sign = 1;
	i = -1;
	nb = 0;
	
	while (str[++i] <= ' ');
	while (str[++i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
	}
	while (str[++i] >= '0' && str[i] <= '9')
		nb = (nb * 10) + (str[i] - 48);
	nb *= sign;
	return (nb);
}

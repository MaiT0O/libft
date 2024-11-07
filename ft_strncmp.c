/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebansse <ebansse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:11:56 by ebansse           #+#    #+#             */
/*   Updated: 2024/11/07 12:24:28 by ebansse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char * first, const char * second, size_t length)
{
	int	i;

	i = 0;
	while (first[i] == second[i] && (size_t)i < length && first[i] && second[i])
		i++;
	return (first[i] - second[i]);
}

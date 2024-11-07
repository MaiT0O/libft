/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebansse <ebansse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:24:22 by ebansse           #+#    #+#             */
/*   Updated: 2024/11/07 12:28:31 by ebansse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	int	i;

	i = -1;
	while (src[++i] && (size_t)i < size - 1)
		dest[i] = src[i];
	dest[i] = '\0';
	return (ft_strlen((char *)src));
}

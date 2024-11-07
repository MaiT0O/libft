/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebansse <ebansse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:44:18 by ebansse           #+#    #+#             */
/*   Updated: 2024/11/07 15:22:31 by ebansse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *clone;
	int	i;
	size_t	j;

	clone = (char *)malloc(sizeof(char) * (len + 1));
	if (!clone || !s)
		return (0);
	
	i = start;
	j = 0;
	while (i < ft_strlen((char *)s) && j < len)
		clone[j++] = s[i++];
	clone[j] = '\0';
	return (clone);
}

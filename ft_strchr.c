/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebansse <ebansse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:52:49 by ebansse           #+#    #+#             */
/*   Updated: 2024/11/08 14:42:09 by ebansse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int searchedChar)
{
	char	c;
	int		i;

	c = (char)searchedChar;
	i = -1;
	while (string[++i])
	{
		if (string[i] == c)
			return ((char *)(string + i));
	}
	if (string[i] == c)
		return ((char *)(string + i));
	return (NULL);
}

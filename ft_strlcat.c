/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebansse <ebansse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:11:57 by ebansse           #+#    #+#             */
/*   Updated: 2024/11/07 11:11:57 by ebansse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	src_len;
	size_t	dest_len;

	j = 0;
	src_len = ft_strlen((char *)src);
	dest_len = ft_strlen(dest);
	i = dest_len;
	if (dstsize == 0)
		return (src_len);
	if (dstsize < dest_len)
		return (dstsize + src_len);
	else
	{
		while (src[i] && (dest_len + j) < dstsize)
			dest[i++] = src[j++];
		if ((dest_len + j) == dstsize && dest_len < dstsize)
			dest[--i] = '\0';
		else
			dest[i] = '\0';
		return (src_len + dest_len);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfathy <mfathy@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 18:22:57 by mfathy            #+#    #+#             */
/*   Updated: 2025/11/25 18:34:13 by mfathy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	slen;
	size_t	dlen;

	slen = 0;
	dlen = 0;
	while (src[slen])
		slen++;
	while (dest[dlen] && dlen < size)
		dlen++;
	if (dlen == size)
		return (size + slen);
	i = dlen;
	j = 0;
	while (src[j] && (i + 1) < size)
	{
		dest[i] = dest[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dlen + slen);
}

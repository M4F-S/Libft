/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfathy <mfathy@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 19:00:25 by mfathy            #+#    #+#             */
/*   Updated: 2025/11/27 19:00:56 by mfathy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n);

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	void	*ptr;

	total_size = count * size;
	if (count != 0 && total_size / count != size)
		return (NULL);
	ptr = malloc(total_size);
	if (!ptr)
	{
		return (NULL);
	}
	ft_bzero(ptr, total_size);
	return (ptr);
}

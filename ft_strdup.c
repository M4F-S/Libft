/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfathy <mfathy@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 18:52:20 by mfathy            #+#    #+#             */
/*   Updated: 2025/11/27 19:01:31 by mfathy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	char	*new_str;
	int		i;
	int		len;

	len = 0;
	i = 0;
	while (src[len])
		len++;
	new_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!new_str)
		return (NULL);
	while (src[i])
	{
		new_str[i] = src[i];
		i++;
	}
	new_str = '\0';
	return (new_str);
}

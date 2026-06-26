/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iscarval <iscarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 14:40:39 by iscarval          #+#    #+#             */
/*   Updated: 2026/06/12 17:03:26 by iscarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	remaining;
	size_t	copy_len;
	char	*dest;

	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	remaining = (ft_strlen(s) - start);
	if (len > remaining)
		copy_len = remaining;
	else
		copy_len = len;
	dest = malloc(copy_len + 1);
	if (dest == NULL)
		return (NULL);
	ft_strlcpy(dest, s + start, copy_len +1);
	return (dest);
}

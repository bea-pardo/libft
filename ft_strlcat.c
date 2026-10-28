/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpardo-l <bpardo-l@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 20:49:19 by bpardo-l          #+#    #+#             */
/*   Updated: 2026/10/22 17:52:00 by bpardo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dest_index;
	size_t	src_index;
	size_t	dest_length;
	size_t	src_length;

	src_length = ft_strlen(src);
	dest_length = 0;
	while (dest_length < dstsize && dst[dest_length] != '\0')
		dest_length++;
	if (dstsize <= dest_length)
		return (dstsize + src_length);
	dest_index = dest_length;
	src_index = 0;
	while (src[src_index] != '\0' && (dest_index + 1) < dstsize)
	{
		dst[dest_index] = src[src_index];
		dest_index++;
		src_index++;
	}
	dst[dest_index] = '\0';
	return (dest_length + src_length);
}
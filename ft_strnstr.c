/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpardo-l <bpardo-l@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 20:52:41 by bpardo-l          #+#    #+#             */
/*   Updated: 2026/10/22 18:15:00 by bpardo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	haystack_idx;
	size_t	needle_idx;

	if (*needle == '\0')
		return ((char *)haystack);
	haystack_idx = 0;
	while (haystack_idx < len && haystack[haystack_idx] != '\0')
	{
		needle_idx = 0;
		while ((haystack_idx + needle_idx) < len
			&& haystack[haystack_idx + needle_idx] == needle[needle_idx])
		{
			if (needle[needle_idx + 1] == '\0')
				return ((char *)&haystack[haystack_idx]);
			needle_idx++;
		}
		haystack_idx++;
	}
	return (NULL);
}
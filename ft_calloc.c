/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpardo-l <bpardo-l@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 18:20:00 by bpardo-l          #+#    #+#             */
/*   Updated: 2026/10/26 18:59:00 by bpardo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*memory_ptr;

	if (nmemb != 0 && size > ((size_t)-1) / nmemb)
		return (NULL);
	memory_ptr = malloc(nmemb * size);
	if (!memory_ptr)
		return (NULL);
	ft_bzero(memory_ptr, nmemb * size);
	return (memory_ptr);
}